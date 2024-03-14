#include<stdio.h>

void main(){

	char *str;
	char carr[15];

	printf("Enter String: ");
	scanf("%s",carr);
gets(carr);
//	fgets(carr,14,stdin);

	printf("%s\n",carr);
}
