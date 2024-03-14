#include<stdio.h>
		int a=10;
		char b='A';
	void main(){
		float c=25.5;
		double d=35.5;
		int *ptr1=&a;
		char *ptr2=&b;
		float *ptr3=&c;
		double *ptr4=&d;
	
		printf("%p\n",ptr1);	//0x10
		printf("%p\n",ptr2);	//0x65
		printf("%p\n",ptr3);	//0x300
		printf("%p\n",ptr4);	//0x400
		
		printf("%d\n",ptr1);	//10
		printf("%c\n",ptr2);	//
		printf("%d\n",ptr3);	//26.5
		printf("%d\n",ptr4);	//35.555
	
	}

/*
 0x565471eae010
0x565471eae014
0x7ffdd584f5dc
0x7ffdd584f5e0
1911218192

-712706596
-712706592
*/
