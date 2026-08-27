print("HARMONIC PROGRESSION PROGRAM")

print()

a1 = int(input("Enter the FIRST TERM (A1): "))
d = int(input("Enter the COMMON DIFFERENCE (d): "))
n = int(input("Enter the NUMBER OF TERMS (n): "))

print()

print("THE ELEMENTS OF THE SERIES FROM A1 TO An:")

def sequence(i):
    if i == 0:
        return a1

    an = sequence(i-1)
    reciprocal = 1 / an
    print(f"1/{an} or {reciprocal}")

    return an + d

sequence(n)