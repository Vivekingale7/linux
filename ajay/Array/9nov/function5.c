#include<stdio.h>

void fun(int **ptr){

	printf("%d\n",**ptr);

}
void main(){

	int x=10;

	int *ptr=&x;

	int **ptr1=&ptr;

	fun(ptr1);
	fun(&ptr);
}
