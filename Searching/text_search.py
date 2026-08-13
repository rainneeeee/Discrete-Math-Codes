def text_search(text, pattern):
    n = len(text)
    m = len(pattern)

    for i in range(0, (n-m)+1):
        j = 0
        
        #   translation: as long as j (index of pattern) is less than m (length of pattern)
        #   and the character text[i+j] matches the character pattern[j]
        while (j < m) and (text[i+j] == pattern[j]):
            j += 1

        if j == m:
            return i    # pattern found at index i, returns i

    return -1   # pattern not found

text = "bscpe2c"
pattern = "cpe"

# this will print 2
print("Pattern found at index:", text_search(text, pattern))

    #    index:      0   1   2   3   4   5   6
    #    text:       b   s   c   p   e   2   c
    #    pattern:            c   p   e