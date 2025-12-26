from google import genai
from google.genai import types
import os

client = genai.Client(api_key=os.environ.get("GENAI_API_KEY"))

# ===== STEP 1: Define tools =====
def read_file(path: str) -> str:
    """Read file contents"""
    with open(path) as f:
        return f.read()


def list_files(path: str = ".") -> str:
    """List files in directory"""
    return "\n".join(os.listdir(path or "."))


def edit_file(path: str, old_str: str, new_str: str) -> str:
    """Create or edit a file"""
    if old_str == "":  # Create new file
        with open(path, "w") as f:
            f.write(new_str)
        return f"Created {path}"

    content = read_file(path)
    with open(path, "w") as f:
        f.write(content.replace(old_str, new_str))
    return "OK"


tools = [read_file, list_files, edit_file]
tool_map = {fn.__name__: fn for fn in tools}

# ===== STEP 2: System prompt =====
SYSTEM = """You are a coding assistant. Use your tools to help users:
- edit_file with old_str="" creates new files
- read_file reads file contents
- list_files shows directory contents
Always use tools instead of just showing code."""

# ===== STEP 3: Agent loop =====
def run_agent():
    chat = client.chats.create(
        model="models/gemini-2.5-flash",  # stable Gemini model
        config={"tools": tools, "system_instruction": SYSTEM}
    )

    while True:
        user_input = input("You: ")
        response = chat.send_message(user_input)

        # Process response and call tools if requested
        while True:
            tool_called = False

            for part in response.candidates[0].content.parts:
                if part.text:
                    print(f"Agent: {part.text}")

                if part.function_call:
                    tool_called = True
                    fn = part.function_call
                    result = tool_map[fn.name](**fn.args)

                    # Send result back to the model
                    response = chat.send_message(
                        types.Part.from_function_response(
                            name=fn.name,
                            response={"result": result}
                        )
                    )
                    break

            if not tool_called:
                break


if __name__ == "__main__":
    run_agent()
