#include<stdio.h>
	void fun(int *arr){
		printf("%p\n",arr);
	}
	void main(){

		int arr1[]={10,20,30,40,50};
		fun(arr1);
		fun(&arr1[1]);
	}
		

