#include<stdio.h>

void main(){

	char ch=127;
	int x=134;

       	ch=ch+1;

       	printf("%d\n",ch);
       	printf("%d\n",ch);
	ch=127;

	printf("%d\n",ch+1);

	printf("%c\n",ch+2);
	
	x+=1;
       	printf("%d\n",x);
       	printf("%d\n",x);

	x=134;
	printf("%d\n",x+1);

	printf("%c\n",x+2);
	
}
