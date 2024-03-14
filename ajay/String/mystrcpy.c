#include<stdio.h>

char* mystrcpy(char *dest,char *src){

	while(*src!='\0'){
	
		*dest=*src;
		src++;
		dest++;
	}
	*dest='\0';
	return dest;
}
void main(){

	char name[20];
	printf("Enter String: ");
	gets(name);

	char name1[20];

	mystrcpy(name1,name);
	puts(name);
	puts(name1);
}
