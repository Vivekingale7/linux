#include<stdio.h>

void main(){

	int x=10;

	int *ptr=x;

	//printf("%d\n",*ptr);
	printf("%ld\n",ptr);
	printf("%p\n",&x);
	
	//printf("%p",*ptr);
	//printf("%p",ptr);
}
