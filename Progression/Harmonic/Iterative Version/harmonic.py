print("HARMONIC PROGRESSION PROGRAM")

print()

a1 = int(input("Enter the FIRST TERM (A1): "))
d = int(input("Enter the COMMON DIFFERENCE (d): "))
n = int(input("Enter the NUMBER OF TERMS (n): "))

print()

print("THE ELEMENTS OF THE SERIES FROM A1 TO An:")

an = a1

for i in range(n):
    reciprocal = 1 / an
    print(f"1/{an} or {reciprocal}")
    an += d