#include <iostream>

using namespace std;

int text_search(string text, string pattern) {
    int n = text.size();
    int m = pattern.size();

    for (int i = 0; i <= n-m; ++i) {
        int j = 0;

        /*
            translation: as long as j (index of pattern) is less than m (length of pattern)
            and the character text[i+j] matches the character pattern[j]
        */
        while((j < m) && (text[i+j] == pattern[j])) {
            j++;
        }

        if (j == m) { return i; }   // pattern found at index i, returns i
    }

    return -1;      // pattern not found
}

int main(void) {
    string text = "bscpe2c";
    string pattern = "cpe";

    // this will print 2
    cout << "Pattern found at index: " << text_search(text, pattern) << endl;

    /*
        index:      0   1   2   3   4   5   6
        text:       b   s   c   p   e   2   c
        pattern:            c   p   e
    */

    return 0;
}