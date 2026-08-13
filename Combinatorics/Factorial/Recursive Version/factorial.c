#include <stdio.h>

double factorial(double n) {
    if (n == 0.0) {
        return 1.0;
    }

    return n * factorial(n-1.0);
}

int main(void) {
    double n;

    printf("Enter the value of N: ");
    scanf("%lf", &n);

    double factorialResult = factorial(n);

    printf("The factorial of %0.0lf is %0.0lf\n", n, factorialResult);

    return 0;
}