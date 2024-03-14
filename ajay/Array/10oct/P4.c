#include<stdio.h>

void *fun(){

	int arr[]={10,20,30,40,50,60,70,80,9,11,12};


	int *arr1=arr;
	return arr1;
}

void main(){

	int *ptr=fun();

	printf("%d\n",*ptr);

	for(int i=0;i<=10;i++){
	
		printf("%d\n",*(ptr+i));
	}
}
