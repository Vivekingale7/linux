#include<stdio.h>
	void main(){
		int x=10;
		
		const int*const ptr=&x;
		printf("%d\n",x);  		//10

		x=30;
		printf("%d\n",x);		//30
		printf("%d\n",*ptr);		//30
	}
