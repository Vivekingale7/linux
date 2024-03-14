#include<stdio.h>
#include<string.h>

void main(){

	char name[20];
	char *str="Ajay Bhosle";

	printf("Enter String: ");
	gets(name);

	int length=strlen(name);
	int length1=strlen(str);

	printf("name size: %d\n",length);
	printf("constant size: %d\n",length1);
}
