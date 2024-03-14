#include<stdio.h>

void main(){

	char ch='A';
	char *cptr=&ch;
	char **cpptr=&cptr;

	printf("%c\n",ch);
	printf("%c\n",*cptr);
	printf("%c\n",**cpptr);
	
	printf("%p\n",&ch);
	printf("%p\n",&cptr);
	printf("%p\n",*(*cpptr));
}

