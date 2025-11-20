#Program to perfrom arithemetic operations 

a = int(input("a = "))
b = int(input("b = "))
operator = int(input("operator= "))

message = "Invalid Message"

if (operator==1):
    result=a+b
    print(result)
elif (operator==2):
     result=a-b
     print(result)
elif (operator==3):
      result=a*b
      print(result) 
else:
     print(message, end="")            
