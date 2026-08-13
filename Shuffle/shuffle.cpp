#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

using namespace std;

int random_generator(int min_val, int max_val) {
    random_device rd;
    mt19937 engine(rd());
    uniform_int_distribution<int> dist(min_val, max_val);

    return dist(engine);
}

void shuffleFunc(vector<int>& s) {
    for (int i = 0; i < s.size(); ++i) {
        swap(s[i], s[random_generator(i, s.size()-1)]);
    }
}

int main(void) {
    vector<int> s = {7, 12, 9, 11, 3};
    shuffleFunc(s);

    // will print shuffled s
    for_each(s.begin(), s.end(), [](int n) {
        cout << n << endl;
    });

    return 0;
}