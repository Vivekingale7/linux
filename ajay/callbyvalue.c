#include<stdio.h>


void add(int x,int y){

	printf("Addition is %d\n",x+y);
}

void sub(int *x,int *y){

	printf("sustraction is %d\n",*y - *x);
}
void main(){

	int x=10;
	int y=20;

	add(x,y);      // call by value
	sub(&x,&y);    //call by address
}
