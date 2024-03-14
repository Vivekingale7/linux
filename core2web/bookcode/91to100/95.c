#include<stdio.h>
	void main(){
		int x=10;
		int *ptr1=&x;
		int *ptr2=x;
		printf("%p\n",ptr1);  	//200
		printf("%p\n",ptr2);	//300
				
		printf("%d\n",ptr1);	//100
		printf("%d\n",ptr2);	//x
	}


/*
 0x7fff8358dd74
0xa
-2091328140
10
*/
