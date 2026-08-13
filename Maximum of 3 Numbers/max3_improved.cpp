// max3 using built-in max function of C++

#include <iostream>

using namespace std;

int MAX3(int a, int b, int c) {
    int large = max(a, b);
    large = max(large, c);

    return large;
}

int main(void) {
    // example values:
    int a = 10, b = 3, c = 6;

    cout << "Large: " << MAX3(a, b, c) << endl;     // prints 10

    return 0;
}