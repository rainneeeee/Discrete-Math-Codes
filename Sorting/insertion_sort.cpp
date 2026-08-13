#include <iostream>
#include <vector>
#include <algorithm> // to use for_each

using namespace std;

// vector<int>& means a reference to vector<int>
// !!! a reference is required to modify 's' directly !!!
void insertion_sort(vector<int>& s) {
    for (int i = 1; i < s.size(); ++i) {
        int val = s[i];
        int j = i-1;

        while((j >= 0) && (s[j] > val)) {
            s[j+1] = s[j];
            j--;
        }

        s[j+1] = val;
    }
}

int main(void) {
    vector<int> s = {7, 12, 9, 11, 3};
    insertion_sort(s);

    /*
        prints:
        3
        7
        9
        11
        12
    */
    for_each(s.begin(), s.end(), [](int n) {
        cout << n << endl;
    });

    return 0;
}