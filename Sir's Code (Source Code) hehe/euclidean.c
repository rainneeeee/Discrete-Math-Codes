#include<stdio.h>

int main(void) {
    int a,b,r;
    
    printf("\n\n\t\t\t EUCLIDIAN ALGORITHM PROGRAM  ");
    printf("\n\n\t\t\tEnter the larger integer:  ");
    scanf ( "%d", &a);     	
    printf("\n\n\t\t\tEnter the smaller integer:  ");
    scanf ( "%d", &b);  

    while (b!=0) {
        r=a%b;
        a=b;
        b=r;
    }
    
    printf("\n\n\t\t\tTHE GCD IS: %d \n\n\n", a); 
    return 0;
}