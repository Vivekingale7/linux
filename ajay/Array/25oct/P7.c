#include<stdio.h>

	int a=10;
	int b;
	int *iptr=0;
	
void fun(){

	int x=30;
	printf("%d\n",a);     // 10	
	printf("%d\n",b);     // 0	
	iptr=&x;

	printf("%p\n",iptr);  
	printf("%d\n",*iptr);  
}

void main(){
	
	fun();
	printf("%d\n",*iptr);
	
	
}
