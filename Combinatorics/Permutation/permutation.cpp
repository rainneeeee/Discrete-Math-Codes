// FORMULA: P = n! / (n-r)!

#include <iostream>
#include <cmath>

using namespace std;

// recursive factorial
int factorial(int n) {
    if (n == 0) { return 1; }

    return n * factorial(n-1);
}

int permutation(int n, int r) {
    return factorial(n) / factorial(n-r);
}

int main(void) {
    int n, r;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Enter the value of r: ";
    cin >> r;

    // nPr = permutation
    cout << n << "P" << r << " = " << permutation(n, r) << endl;

    return 0;
}