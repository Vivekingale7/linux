#include<stdio.h>

void main(){

	int x=10;
	int y=20;

	int *iptr=&x;
	int *iptr1=&y;

	printf("%ld\n",sizeof(*iptr));

	printf("%d\n",*iptr + *iptr1);
	printf("%d\n",iptr1-iptr);




}
