def factorial(n):
    if n == 0.0:
        return 1.0

    return n * factorial(n-1.0)

n = float(input("Enter the value of n: "))

factorialResult = factorial(n)

print(f"The factorial of {n} is {factorialResult}")