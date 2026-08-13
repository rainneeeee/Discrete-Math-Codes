#include <iostream>
#include <vector>
#include <algorithm> // to use for_each

using namespace std;

// vector<int>& means a reference to vector<int>
// !!! a reference is required to modify 's' directly !!!
void bubble_sort(vector<int>& s) {
    for (int i = 0; i < s.size()-1; ++i) {
        for (int j = 0; j < s.size()-i-1; ++j) {
            if (s[j] > s[j+1]) {
                swap(s[j], s[j+1]);
            }
        }
    }
}

int main(void) {
    vector<int> s = {7, 12, 9, 11, 3};
    bubble_sort(s);

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