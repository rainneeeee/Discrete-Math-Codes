import math

def is_prime(n):
    for d in range(2, math.floor(math.sqrt(n))+1):
        if n % d == 0:
            return d
    return 0

print("is prime program")

n = int(input("n: "))
print(f"is prime: {is_prime(n)==0}")