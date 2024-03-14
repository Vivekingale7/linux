#include<stdio.h>

void main(){

	int arr[]={1,2,3,4};

	int arr1[]={5,6,7,8};

	int (*ptr)[4]=&arr;

	int *ptr1=&arr[2];

	printf("%d\n",*ptr1);
	ptr1++;
	printf("%d\n",*ptr1);
}
