#include <stdio.h>  

int main(void) {
    int n, max=0; 

    printf("\n\n\t\t\tEnter Array size:     " );
    scanf ("%d", &n);   

    int array[n]; 

    for (int i = 0; i < n; i++ ) 
    {
        printf("\n\n\t\t\tEnter value #%d : ", i);
        scanf( "%d", &array[i]);   
    }
            
    for (int j = 0; j < n; j++) {      
        if (array[j] > max) 		/* compare array[0] - [5] to max */
        max= array[j];
    }
        
    /* output max  */
    printf("\n\n\n\n\t\t\t\t Largest Element in the ARRAY is %d", max ); 
    
    printf("\n\n\n\t\t\t" ); 
    
    return 0;
}