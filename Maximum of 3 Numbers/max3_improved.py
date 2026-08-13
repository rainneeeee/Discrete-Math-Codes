# max3 using built-in max function of Python

def MAX3(a, b, c):
    large = max(a, b)
    large = max(large, c)

    return large

# example values:
a = 10
b = 3
c = 6

print("Large:", MAX3(a, b, c))  # prints 10