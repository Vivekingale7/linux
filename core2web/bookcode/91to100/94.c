#include<stdio.h>
	void main(){
		int x=10;
		printf("%d\n",x);  	//10
		printf("%d\n",&x);	//gv
		printf("%p\n",&x);	//100

		
		int *iptr=&x;		
		printf("%p\n",iptr);	//100
		printf("%p\n",&iptr);	//200
	}
