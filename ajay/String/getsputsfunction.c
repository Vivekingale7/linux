#include<stdio.h>

void fun(char *ptr){

	puts(ptr);
}
void gun(char ptr[]){

	puts(ptr);
}
void main(){

	char arr[20];

	printf("Enter STring: ");
	gets(arr);

	fun(arr);
	gun(arr);
}
