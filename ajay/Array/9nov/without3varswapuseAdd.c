#include<stdio.h>

void fun(int *x,int *y){

	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;
	
}
void main(){

	int x=10;
	int y=20;

	fun(&x,&y);

	printf("x is %d\n",x);
	printf("y is %d\n",y);
}
