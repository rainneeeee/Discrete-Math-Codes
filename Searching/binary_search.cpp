#include <iostream>
#include <vector>

using namespace std;

int binary_search(vector<int> s, int target) {
    int start = 0, end = s.size()-1;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if (s[mid] == target) {
            return mid;     // target found at index mid
        }
        else if (s[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return -1;      // not found
}

int main(void) {
    // for binary search to work, the vector must be sorted
    vector<int> s = {1, 3, 5, 7, 9};
    int target = 5;

    // will print 2
    cout << target << " found at index: " << binary_search(s, target) << endl;

    return 0;
}