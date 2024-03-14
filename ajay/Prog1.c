#include<stdio.h>

char* myrev(char* str){

	char *temp=str;

	while(*temp!='\0'){
	
		temp++;
	}
	temp--;
	char x;

	while(str<temp){
	
		x=*str;
		*str=*temp;
		*temp=x;

		temp--;
		str++;
	}

	return str;
}

void main(){

	char str[10]={'a','j','a','y','\0'};
	
	puts(str);
	myrev(str);
	puts(str);
}
