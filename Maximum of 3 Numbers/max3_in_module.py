def max3(a, b, c):
    large = a

    if b > large:
        large = b
    if c > large:
        large = c

    return large

# example values:
a = 10
b = 3
c = 6

print("Large:", max3(a, b, c))  # prints 10