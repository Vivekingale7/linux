#include<stdio.h>

void main(){

	int x=10;

	int *iptr=&x;
	//int *iptr1=x;

	// *iptr=iptr+10;
	printf("%d\n",*iptr);
	 *iptr=iptr+10;
	printf("%d\n",*iptr);
	//printf("%d\n",*iptr);
	//printf("%p\n",&x);


}
