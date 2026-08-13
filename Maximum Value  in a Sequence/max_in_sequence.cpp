#include <iostream>
#include <vector>

using namespace std;

int max_in_sequence(vector<int> sequence) {
    int large = sequence.front();

    for (int i = 1; i < sequence.size(); ++i) {
        if (sequence[i] > large) {
            large = sequence[i];
        }
    }

    return large;
}

int main(void) {
    // example sequence:
    vector<int> sequence = {7, 12, 9, 11, 3};

    // this will print 12
    cout << "The maximum value in the sequence is: " << max_in_sequence(sequence) << endl;

    return 0;
}