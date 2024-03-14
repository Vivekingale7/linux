#include<stdio.h>

char * mystrlwr(char *str){

	while(*str!='\0'){
	
		if(*str>='A' && *str<='Z'){
		
			*str=*str+32;

		}
		str++;
	}
	return str;
}
void main(){

	char str[20];
	printf("Enter String: ");
	gets(str);

	mystrlwr(str);
	puts(str);
}
