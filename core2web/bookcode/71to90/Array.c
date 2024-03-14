#include<stdio.h>

void main(){

	char carr[5]={'H','E','L','L','O'};

	char *cptr=&carr;

	printf("%p\n",&carr[0]);
	printf("%p\n",&carr);
	printf("%p\n",cptr);

	printf("%c\n",carr[0]);
	printf("%c\n",carr);
	printf("%c\n",*cptr++);
	printf("%c\n",*cptr);



	
}
