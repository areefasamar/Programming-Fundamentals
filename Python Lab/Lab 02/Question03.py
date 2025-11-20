# Program to print a list in reverse order using a loop

number = int(input("How many numbers do you want to enter: "))

numbers = []

for i in range(number):
    value = int(input(f"Enter number {i+1}: "))
    numbers.append(value)

print("List in reverse order:")
for i in range(len(numbers)-1, -1, -1):  
    print(numbers[i])
