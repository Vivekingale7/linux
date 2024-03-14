//Program 5

#include<stdio.h>

int mystrcon(char* str1,char* str2){
	while(*str1 != '\0'){
		str1++;
	}
	while(*str2 != '\0'){
		*str1 = *str2;
		str1++;
		str2++;
	}
	*str1 = '\0';
	return *str1;
}

void main(){
	char* str1[1]={"a"};
	printf("Enter first String: ");
	gets(str1);

	char *str2[1]={"a"};
	printf("Enter second String: ");
	gets(str2);

	mystrcon(str1,str2);

	puts(str1);
}

