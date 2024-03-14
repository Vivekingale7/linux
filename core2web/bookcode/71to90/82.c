#include<stdio.h>
	void main(){
		int iarr[5]={10,20,30,40,50};
		int x=10;
		char ch='A';
		printf("%d\n",x);    //10
		printf("%c\n",ch);   //A
		
		printf("%p\n",&x);   //
		printf("%p\n",&ch);
		
		printf("%p\n",iarr);
		printf("%p\n",&iarr);
	}


/*
 10
A
0x7fff094d5d0c
0x7fff094d5d0b
0x7fff094d5d10
0x7fff094d5d10
*/
