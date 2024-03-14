// void pointer
#include<stdio.h>

void main(){

	int x=10;
	float y=20.4;
	char ch='A';

	 void* vptr[] ={&x,&y,&ch};

	printf("%d\n",*(int*)vptr[0]);
	printf("%f\n",*(float*)vptr[1]);
	printf("%c\n",*(char*)vptr[2]);



}
