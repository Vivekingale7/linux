#include<stdio.h>

void main(){

	 int x=10;

        int * const iptr=&x;

	printf("%d\n",x);

	*iptr=30;

//	printf("%d\n",*iptr);
	printf("%d\n",x);
}
