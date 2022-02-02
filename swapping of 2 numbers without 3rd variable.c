#include<stdio.h>      // including standard input and output header file.
void main()
{
	int a=10,b=20;     // a,b are variables of integer type.
	
	printf("Before swapping\na=%d\tb=%d",a,b);
	
	a = a+b;		   // code to swap values of a,b.	
	b = a-b;
	a = a-b;
	
	/* code can also be like a = a*b;
                           b = a/b;
                           a = a/b;*/
    
    printf("\n\nAfter swapping\na=%d\tb=%d",a,b);
    getch();
}
