#include<stdio.h>
	void main(){
		int x=10;
		const int *ptr=&x;
		printf("%d\n",x); 	//10
		*ptr=30;
		printf("%d\n",x);	//error-read only
	}
