/*
6. WAP to swap values of two numbers using a pointer.
(Hint: Use de-referencing of pointers)
Input : x=10
	y=20
Op: After swapping
        x=20
        y=10
Write output & draw a good diagram for the code.

*/

#include<stdio.h>

	void main(){
		int x=10;
		int y=20;
		
		int *ptr1=&x;
		int *ptr2=&y;
	//	int *ptr3=0;

	//	*ptr3=y;
	//	*ptr2=*ptr1;
	//	*ptr2=x;
		
		x=x+y;
		y=x-y;
		x=x-y;
		printf("x is %d\n ",x);
		printf("y is %d\n ",y);
	}


