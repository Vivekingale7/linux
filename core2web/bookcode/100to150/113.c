#include<stdio.h>
	void main(){
		int x=10;

		int *iptr=&x;
		void *vptr=&x;

		printf("%p\n",iptr);		//200
		printf("%p\n",vptr);		//200
		printf("%d\n",*iptr);		//10
		printf("%d\n",*(int*)vptr);	//10
	}
		
