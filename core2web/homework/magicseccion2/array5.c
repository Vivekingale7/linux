
#include<stdio.h>

void main(){

	int x=10;
	int *ptr=&x;
	char *cptr=&x;

	printf("%p\n",ptr);
	printf("%p\n",cptr);

}
