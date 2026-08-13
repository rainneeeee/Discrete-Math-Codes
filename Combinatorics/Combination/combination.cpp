// FORMULA: C = n! / [(n-r)! * r!]

#include <iostream>

using namespace std;

int factorial(int n) {
    if (n == 0) { return 1; }
    
    return n * factorial(n-1);
}

int combination(int n, int r) {
    return factorial(n) / (factorial(n-r) * factorial(r));
}

int main(void) {
    int n, r;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Enter the value of r: ";
    cin >> r;

    // nCr = combination
    cout << n << "C" << r << " = " << combination(n, r) << endl;

    return 0;
}