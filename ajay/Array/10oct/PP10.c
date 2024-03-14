#include<stdio.h>

void add(int a,int b){

	printf("1.%d\n",a+b);
	printf("2.%d\n",a+b);
	printf("3.%d\n",a+b);
}
void main(){

	void (*ptr) (int ,int);

	ptr=add;

	printf("Address= %p\n",ptr);
	ptr(10,20);
	ptr++;

	printf("Address= %p\n",ptr);
	ptr(30,20);
	ptr++;
	
	printf("Address= %p\n",ptr);
	ptr(40,20);
	ptr++;
}
