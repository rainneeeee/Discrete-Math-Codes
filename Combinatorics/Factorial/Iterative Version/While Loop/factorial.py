n = float(input("Enter the value of n: "))

factorial = 1.0
counter = 1.0

while counter <= n:
    factorial = factorial * counter
    counter += 1

print(f"The factorial of {n} is {factorial}")