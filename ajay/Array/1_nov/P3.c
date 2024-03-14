#include<stdio.h>
#include<stdlib.h>

void fun(int x){

	int *ptr1=(int*)malloc(sizeof(int));

	 *ptr1=x;

	int *ptr2=ptr1;

	printf("%d\n",*ptr1);
	printf("%d\n",*ptr2);

	free(ptr2);

	printf("%d\n",*ptr2);
	printf("%d\n",*ptr1);
}

void main(){

	fun(30);
}
