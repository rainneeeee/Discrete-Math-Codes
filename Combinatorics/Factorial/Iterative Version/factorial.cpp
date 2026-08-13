#include <iostream>

using namespace std;

int main() {
    double n;

    cout << "Enter the value of n: ";
    cin >> n;

    double factorial = 1, counter = 1;

    while (counter <= n) {
        factorial = factorial * counter;
        counter++;
    }

    cout << "The factorial of " << n << " is " << factorial << endl;

    return 0;
}