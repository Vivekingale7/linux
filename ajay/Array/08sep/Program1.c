#include<stdio.h>

int mystrlen(char *str){
	
	int count = 0;
	while(*str != '\0')
	{
		str++;
		count++;
	}
	return count;
}

void main() {

	char* str1[1]={"a"};
	printf("Enter the string :");
	gets(str1);

	int count = mystrlen(str1);
	printf("The lentgth of entered string is %d\n",count);
}
