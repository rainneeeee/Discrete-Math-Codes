#include <stdio.h>

int main(void) {
    double n;

    printf("Enter the value of N: ");
    scanf("%lf", &n);

    double factorial = 1, counter = 1;

    for (double counter = 1.0; counter <= n; counter += 1.0) {
        factorial *= counter;
    }

    printf("The factorial of %0.0lf is %0.0lf\n", n, factorial);

    return 0;
}