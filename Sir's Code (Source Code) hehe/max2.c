#include<stdio.h>

int main(void)	{
   int a, b,X;

   // function prototypes of max and Title
   // because C language is a procedural language
   int max(int num1, int num2);
   void Title(void);   

   Title();

   printf ("\n\n\t\t\t Enter an integer:       " );
   scanf ("%d" , &a );
   printf ("\n\n\t\t\t Enter another integer:       " );
   scanf ( "%d",&b );

   X = max(a, b);

   printf( "\n\n\t\t\t Maximum value is : %d\n", X );
   return 0;
}

// definition of max function
int max(int num1, int num2) {
   int result;

   if (num1 > num2)	
      result = num1;
   else		
      result = num2;

   return result;
}
  
// definition of Title function
void Title(void) {
   printf("\n\t\t\tPROGRAM IN FUNCTION FORMAT THAT SHOWS THE LARGEST VALUE BETWEEN 2 INTEGERS" );
}