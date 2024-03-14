
#include<stdio.h>

void main(){

	int arr[]={10,20,30,40,50};

	int *iptr=&(arr[0]);
	int *iptr1=&(arr[1]);
/*
	printf("%d\n",*iptr);              //10
	printf("%d\n",*iptr1);             //40
			
	printf("%ld\n",iptr1-iptr);          	// 3
	printf("%d\n",iptr1-iptr);      	// 3
*/
	int ipr3=iptr - iptr1;

	printf("%ld\n",ipr3);
	printf("%d\n",ipr3);



}
