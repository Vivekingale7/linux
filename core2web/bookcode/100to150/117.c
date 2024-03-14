#include<stdio.h>

	void main(){
		int x=10;
		printf("%d\n",x);	//10

		int *iptr=*iptr;

		printf("%d\n",*iptr);	//segmentation fault

	}
