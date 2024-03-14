#include<stdio.h>

void main(){

	int x=10;

	int *iptr=&x;

	void *vptr=&x;

	printf("%d\n",*((int*)vptr));
	printf("%d\n",*iptr);

}
