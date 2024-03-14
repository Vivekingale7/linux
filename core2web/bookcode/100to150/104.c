#include<stdio.h>
	void main(){
		char ch1='x';
		char ch2='y';
		char ch3='z';

		char *ptr=&ch1;

		printf("%p\n",ptr);		//100
		printf("%c\n",*ptr);		//x
		
		printf("%p\n",(ptr+1));		//200
		printf("%c\n",*(ptr+1));	//y
		
		printf("%p\n",(ptr+2));		//300
		printf("%c\n",*(ptr+2));	//z
		}
	

/*
 0x7ffc88f8697d
x
0x7ffc88f8697e
y
0x7ffc88f8697f
z
*/
