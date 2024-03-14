//addition of two pointer

#include<stdio.h>
	void main(){
	       int x=10;
       	      int y=20;
 	int *ptr1=&x;
	int *ptr2=&y;
	printf("%d\n",*ptr1+*ptr2);		//30
	printf("%p\n",ptr1+ptr2);		//0xA
	
	}

/*
  error: invalid operands to binary + (have ‘int *’ and ‘int *’)
   10 |  printf("%p\n",ptr1+ptr2);
   */
