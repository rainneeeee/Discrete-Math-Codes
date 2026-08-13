def max_in_sequence(sequence):
    large = sequence[0]

    for i in range(1, len(sequence)):
        if sequence[i] > large:
            large = sequence[i]

    return large

# example sequence:
sequence = [7, 12, 9, 11, 3]
print(len(sequence))

print("The maximum value in the sequence is:", max_in_sequence(sequence))   # prints 12