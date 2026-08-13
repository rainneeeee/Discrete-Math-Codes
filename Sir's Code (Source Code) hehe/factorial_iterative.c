#include<stdio.h>

int main(void) {
    double fact =1,ctr=1, n;

    printf("\n\t\t\t ENTER THE VALUE OF N:     ");
    scanf("%lf" , &n);

    while (ctr<=n) {		
        fact = fact * ctr;
        printf("\n\t\t\t THE FACTORIAL OF %0.0lf IS %0.0lf", ctr, fact);
        ctr++;
    }

    printf("\n\n\t\t\t ");	

    return 0;
}