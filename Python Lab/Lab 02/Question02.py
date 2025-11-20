# Program to display numbers who saisfies the condition
from array import array

num = int(input("How many numbers do you want to check: "))

numbers = array('i', [])

for i in range(num):
    value = int(input(f"Enter number {i+1}: "))
    numbers.append(value)

for number in numbers:
    if number > 500:
        break
    elif number < 150:
        continue
    elif number % 5 == 0:
        print(number)
