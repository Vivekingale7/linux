#include<stdio.h>

void main(){

	int x=127;
	char ch='A';

	int *iptr=&x;
	char *cptr=&x;
         //*cptr++;
	 (*cptr)++;
	//printf("%d\n",cptr);
	printf("%d\n",*cptr);
}
