#include<stdio.h>

int mystrlen(char *str){

	int cnt=0;

	while(*str!='\0'){
	
		cnt++;
		str++;
	}
	return cnt;
} 

void main(){

	char name[20];

	printf("Enter String: ");
	gets(name);

	int length1=mystrlen(name);

	printf("length is %d\n",length1);
}
