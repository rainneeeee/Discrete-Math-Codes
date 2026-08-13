import random

def shuffle(s):
    for i in range(0, len(s)):
        new_index = random.randrange(i, len(s))
        s[i], s[new_index] = s[new_index], s[i]     # swap in python

s = [7, 12, 9, 11, 3]

shuffle(s)
# will print shuffled s
print(s)