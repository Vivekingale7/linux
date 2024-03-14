#include<stdio.h>
void main(){
	char var;

	printf("var=");
	scanf("%c",&var);


	if(var=='A' || var=='E' || var=='I' || var=='O' || var=='U' || var=='a' || var=='e'  || var=='i' || var=='o' || var=='u' ){
		printf("%c is a vowel\n",var );
	}
	else{
		printf("%c is a constant",var);
	}
}


