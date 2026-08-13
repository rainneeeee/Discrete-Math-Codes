#include <iostream>

using namespace std;

double factorial(double n) {
    if (n == 0.0) {
        return 1.0;
    }

    return n * factorial(n-1.0);
}

int main() {
    double n;

    cout << "Enter the value of n: ";
    cin >> n;

    double factorialResult = factorial(n);

    cout << "The factorial of " << n << " is " << factorialResult << endl;

    return 0;
}