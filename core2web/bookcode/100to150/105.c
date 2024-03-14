#include<stdio.h>
	void main(){
		char ch1='x';
		char ch2='y';


		char *ptr=&ch1;

		printf("%p\n",ptr);		//100
		printf("%c\n",*ptr);	//x
		
		printf("%p\n",(ptr+1.5));
		printf("%c\n",*(ptr+1.5));	

	/*
	  error: invalid operands to binary + (have ‘char *’ and ‘double’)
   12 |   printf("%p\n",(ptr+1.5));
      |                     ^
105.c:13:22: error: invalid operands to binary + (have ‘char *’ and ‘double’)
   13 |   printf("%c\n",*(ptr+1.5));
*/	
		printf("%p\n",(ptr+'A'));	//165
		printf("%c\n",*(ptr+'A'));	//gv
		}
	


