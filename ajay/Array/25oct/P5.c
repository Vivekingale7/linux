#include<stdio.h>

void main(){

	int x=10,y=20,z=30;
	int *iptr=&x;
	int *iptr1=&y;
	int *iptr2=&z;

	printf("%ld \n",iptr-iptr2+1);

}
