#include<stdio.h>

char* mystrupr(char *str){

	while(*str!='\0'){
	
		if(*str>='a' && *str<='z'){
		
			*str=*str-32;
		}
		str++;
	}

	return str;
}
void main(){

	char str[20];
	printf("Enter String: ");
	gets(str);
	mystrupr(str);
	puts(str);
}
