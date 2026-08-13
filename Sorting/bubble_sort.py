def bubble_sort(s):
    for i in range(0, len(s)-1):
        for j in range(0, len(s)-i-1):
            if s[j] > s[j+1]:
                s[j], s[j+1] = s[j+1], s[j]     # swap implementation of python

s = [7, 12, 9, 11, 3]
bubble_sort(s)

print(s)    # prints [3, 7, 9, 11, 12]