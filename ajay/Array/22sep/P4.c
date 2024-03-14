#include<stdio.h>

void main(){

	int arr[]={10,20,30,40};

	printf("%ld\n",sizeof(arr));
	printf("%ld\n",sizeof(&arr));
	printf("%ld\n",sizeof(&arr[0]));
	printf("%ld\n",sizeof(arr[3]));


}
