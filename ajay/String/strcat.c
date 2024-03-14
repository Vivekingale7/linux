#include<stdio.h>
#include<string.h>

void main(){

	char str1[20];
	
	printf("Enter String: ");
	gets(str1);

	char str2[20];
	printf("Enter String: ");
	gets(str2);

	strcat(str1,str2);
	puts(str1);
}
