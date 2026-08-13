#include<stdio.h>

int main(void) {
    int ctr=1, fact=1, ctr2=1, fact2=1, ctr3=1, fact3=1, n, x, r, P, C;

    printf("\n\n\t\t\t\t FACTORIAL, PERMUTATION and COMBINATION PROGRAM     ");
    printf("\n\n\t\t\t ENTER THE VALUE OF N:     ");
    scanf("%d" , &n );
    printf("\n\t\t\t ENTER THE VALUE OF r:     ");
    scanf("%d" , &r );

    while (ctr<=n) {		
        fact = fact * ctr; 
        printf("\n\n\t\t\t THE FACTORIAL OF %d IS %d", ctr, fact);
        ctr++;
    }

    x = n-r;

    while (ctr2<=x) {
        fact2=fact2*ctr2; 
        ctr2++;
    }	

    P = fact/fact2;

    while (ctr3<=r) {
        fact3=fact3*ctr3; 
        ctr3++;
    }	

    C = fact/(fact2*fact3);

    printf("\n\n\n\t\t\t THE PERMUTATION OF %d TAKEN %d AT A TIME IS : %d", n, r, P);
    printf("\n\n\t\t\t THE COMBINATION OF %d TAKEN %d AT A TIME IS : %d", n, r, C);

    printf("\n\n\t\t\t ");	

    return 0;
}