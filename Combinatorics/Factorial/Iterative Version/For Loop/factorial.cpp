#include <iostream>

using namespace std;

int main() {
    double n;

    cout << "Enter the value of n: ";
    cin >> n;

    double factorial = 1;

    for (double counter = 1.0; counter <= n; counter += 1.0) {
        factorial *= counter;
    }

    cout << "The factorial of " << n << " is " << factorial << endl;

    return 0;
}