#include<stdio.h>


void fun(int *iptr){

	printf("%d\n",*iptr);
}
void main(){

	int x=10;

	fun(&x);
	
}
