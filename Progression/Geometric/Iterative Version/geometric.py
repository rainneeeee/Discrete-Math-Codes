print("GEOMETRIC SERIES/PROGRESSION PROGRAM")

print()

a1 = int(input("Enter the FIRST TERM (A1): "))
r = int(input("Enter the COMMON RATIO (r): "))
n = int(input("Enter the NUMBER OF TERMS (n): "))

print()

print("THE ELEMENTS OF THE SERIES FROM A1 TO An:")

an = a1

for i in range(n):
    print(an)
    an *= r