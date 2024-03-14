#include<stdio.h>
#include<stdlib.h>

void fun(int x){

	int *ptr1=(int*)malloc(sizeof(int));
	 *ptr1=x;

	int *ptr3=ptr1;

	printf("%d\n",*ptr3);
	printf("%d\n",*ptr1);

	free(ptr1);

	printf("%d\n",*ptr3);
}
void main(){

	fun(20);
}
