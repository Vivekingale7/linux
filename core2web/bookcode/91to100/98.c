#include<stdio.h>
	void main(){
	       int x=10;
       		char ch='A';
 	int *ptr1=&x;
	int *ptr2=&ch;
	printf("%p\n",ptr1);		//0x10
	printf("%p\n",ptr2);		//0xA
	
	printf("%p\n",*ptr1);		//
	printf("%p\n",*ptr2);
	
	printf("%d\n",*ptr1);		//
	printf("%d\n",*ptr2);
	}
/*
0x7fff910f5f94
0x7fff910f5f93
0xa
0xa41
10
2625

*/
