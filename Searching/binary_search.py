def binary_search(s, target):
    start = 0
    end = len(s)-1

    while start <= end:
        mid = int(start + (end - start) / 2)    # index must be int

        if s[mid] == target:
            return mid      # target found at index mid
        elif s[mid] < target:
            start = mid + 1
        else:
            end = mid - 1

    return -1   # not found

# for binary search to work, the vector must be sorted
s = [1, 3, 5, 7, 9]
target = 5

print(target, "found at index:", binary_search(s, target))