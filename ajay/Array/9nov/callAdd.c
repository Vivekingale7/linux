#include<stdio.h>

void fun(int *ptr){
	
	printf("x is in fun %d\n",*ptr);
	*ptr=50;
	
}

void main(){
	
	int x=10;
	fun(&x);
	printf("x is in main %d\n",x);
}
