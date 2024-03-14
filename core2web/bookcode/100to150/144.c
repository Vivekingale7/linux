#include<stdio.h>
	void main(){
		int x=10;
		int y=10;

		const int *const ptr=&x;
		printf("%d\n",x);		//10

		*ptr=30;
		printf("%d\n",x);		// error: assignment of read-only location ‘*ptr’
   
		ptr=&y;
	}
