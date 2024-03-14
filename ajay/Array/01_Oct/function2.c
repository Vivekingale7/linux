// function Pointer

#include<stdio.h>

void add(int a,int b){

	printf("addition is =%d\n",a+b);
}
void sub(float a,float b){                            // parameter  float

	printf("substraction is =%f\n",a-b);
}

void main(){

	void(*ptr)(int a,int b);                   // argument pass int

	ptr=add;
	ptr(10,20);
	ptr=sub;
	ptr(30,10);
	//sub(20,10);                        
}

/* compile time warning: 
warning: assignment to ‘void (*)(int,  int)’ from incompatible pointer type ‘void (*)(float,  float)’ [-Wincompatible-pointer-types]
   20 |         ptr=sub;

Output:
addition is =30
substraction is =0.000000
*/
