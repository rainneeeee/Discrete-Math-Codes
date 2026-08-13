#include <iostream>

using namespace std;

int max3(int a, int b, int c) {
    int large = a;  // assuming the largest is a

    if (b > large) { large = b; }   // if b is larger than large, set large = b
    if (c > large) { large = c; }   // if c is larger than large, set large = c

    return large;
}

int main(void) {
    // example values:
    int a = 10, b = 3, c = 6;

    cout << "Large: " << max3(a, b, c) << endl;     // prints 10

    return 0;
}