#include<stdio.h>

void main(){

	int carr[]={'A','B','C'};

	int (*cptr)[3]=&carr;
	int *cptr1=&carr[0];

	printf("%c\n",**cptr);
	cptr1++;
	printf("%c\n",*cptr1);
	cptr1++;
	printf("%c\n",*cptr1);
}
