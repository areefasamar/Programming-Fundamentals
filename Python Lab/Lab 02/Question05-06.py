# Program to find factorial of a given number

number = int(input("Enter the Number: "))
answer = 1

for i in range (1,number+1):
    answer*=i

print(answer)    
