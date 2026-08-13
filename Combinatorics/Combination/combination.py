# FORMULA: C = n! / [(n-r)! * r!]

import math

def combination(n, r):
    return math.factorial(n) / (math.factorial(n-r) * math.factorial(r))

n = int(input("Enter the value of n: "))
r = int(input("Enter the value of r: "))

print(f"{n}C{r} = {combination(n, r)}")     # nCr = combination