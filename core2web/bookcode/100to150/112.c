#include<stdio.h>
	void main(){
		int x=10;
		int *iptr=&x;
		char *cptr=&x;

		printf("%d\n",iptr);  //10
		printf("%d\n",cptr);  
	}
