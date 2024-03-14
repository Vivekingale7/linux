// function Pointer

#include<stdio.h>

void add(int a,int b){

	printf("addition is =%d\n",a+b);
}
void sub(int a,int b){

	printf("substraction is =%d\n",a-b);
}

void main(){

	void(*ptr)(int a,int b);                            //declaration function pointer

	ptr=add;
	ptr(10,20);
	ptr=sub;
	ptr(30,10);
	
}

/*
Output:

addition is =30
substraction is =20

 */ 
