def gcd(a, b):
    if a < b:
        a, b = b, a # swap(a, b)
    while b != 0:
        r = a % b
        a = b
        b = r
    return a

print("gcd(a, b) program")

a = int(input("a: "))
b = int(input("b: "))

print(f"gcd({a}, {b}) = {gcd(a, b)}")