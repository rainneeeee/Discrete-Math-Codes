print("GEOMETRIC SERIES/PROGRESSION PROGRAM")

print()

a1 = int(input("Enter the FIRST TERM (A1): "))
r = int(input("Enter the COMMON RATIO (r): "))
n = int(input("Enter the NUMBER OF TERMS (n): "))

print()

print("THE ELEMENTS OF THE SERIES FROM A1 TO An:")

def sequence(i):
    if i == 0:
        return a1
    
    an = sequence(i-1)
    print(an)

    return an * r

sequence(n)