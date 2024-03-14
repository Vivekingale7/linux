#include<stdio.h>

char* mystrev(char *str){

	char *temp=str;

	while(*temp!='\0'){
	
		temp++;
	}
	temp--;
	char x;

	while(str<temp){
	
		x=*str;
		*str=*temp;
		*temp=x;
		temp--;
		str++;
	}
	return str;
}
void main(){

	char str[20];

	printf("Enter String: ");
	gets(str);

	mystrev(str);

	puts(str);
}
