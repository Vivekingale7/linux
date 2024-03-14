#include<stdio.h>

void fun(int *x, int *y){

	int temp=*x;
	*x=*y;
	*y=temp;
}
void main(){

	int x=10;
	int y=20;

	fun(&x,&y);

	printf("x is %d\n",x);
	printf("y is %d\n",y);
}
