#include<stdio.h>

char* mystrcat(char *str,char *str1){

	while(*str!='\0'){
	
		str++;
	}
	while(*str1!='\0'){
	
		*str=*str1;
		str++;
		str1++;
	}
	*str1='\0';
	return str1;

}
void main(){

	char str[20];
	printf("ENter String: ");
	gets(str);

	char str1[20];
	printf("ENter String: ");
	gets(str1);

	mystrcat(str,str1);
	puts(str);
}
