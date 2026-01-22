# Program to print Prime Numbers within the range

print("Enter the Range: ")
start = int(input("Range Start: "))
stop = int(input("Range Stop: "))

print(f"Prime Numbers Between {start} and {stop} are:")

for num in range(start, stop + 1):
    if num < 2: 
        continue
    isprime = 1  
    for i in range(2, num):
        if num % i == 0:
            isprime = 0
            break
    if isprime == 1:
        print(num, end =" ")
