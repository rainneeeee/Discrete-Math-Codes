# FORMULA: P = n! / (n-r)!

import math

def permutation(n, r):
    return math.factorial(n) / math.factorial(n-r)

n = int(input("Enter the value of n: "))
r = int(input("Enter the value of r: "))

print(f"{n}P{r} = {permutation(n, r)}")     # nPr = permutation