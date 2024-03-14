/*write a program, take char from user print whether it is in UPPWERCASE or lowercase ,take all the value from user
input: var=A
output:A IS A UPPERCASE*/


#include<stdio.h>
void main(){
	int ch;

	printf("ch=");
	scanf("%lc",&ch);


	if(ch>=65 && ch<=90){
		printf("%c is a UpperCase\n",ch );
	}
	else{
		printf("%c is a lowercase character\n",ch);
	}


}
