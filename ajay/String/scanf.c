#include<stdio.h>

void main(){

	char name[20];
	printf("Enter String:\n");
	scanf("%[^\n]",name);
	printf("%s\n",name);
	scanf("%[^\n]",name);
	printf("%s\n",name);

}
