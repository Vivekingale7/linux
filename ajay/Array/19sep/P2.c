// two dimwnsional Array
//
#include<stdio.h>

void main(){

	int arr[][3]={1,2,3,4,5,6,7};

	printf("%p\n",&arr[0][0]);
	printf("%p\n",&arr[1][0]);
	printf("%p\n",&arr[2][0]);
	printf("%p\n",&arr+1);
	printf("%p\n",&arr+1);
}
