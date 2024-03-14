#include<stdio.h>

void fun1(int (*arr)[]){

	printf("In fun1\n");

}
void fun(int* arr){

	printf("In fun\n");
}
void main(){

	int arr[]={1,2,3,4,5};

	fun(arr);
	fun1(&arr);
}
