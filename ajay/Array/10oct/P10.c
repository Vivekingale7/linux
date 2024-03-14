#include<stdio.h>

void main(){

	char name[30];

	printf("Enter String: ");
	//scanf("%s",name);
	fgets(name,20,stdin);
	printf("%s",name);
}
