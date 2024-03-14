#include<stdio.h>
	void main(){
		char carr[]={'A','B','C'};
		char carr2[]={'D','E','F'};
 		
		char *ptr1=&carr[1];
		char *ptr2=carr;
		char (*ptr3)[3]=&carr;

		printf("%c\n",**ptr3);
		ptr3++;
		printf("%c\n",**ptr3);

		printf("%c\n",*ptr1);
		ptr1++;
		printf("%c\n",*ptr1);

		printf("%c\n",**ptr3);
		printf("%c\n",*(*(ptr3)+2));
		printf("%c\n",*((*ptr3)));
	}
