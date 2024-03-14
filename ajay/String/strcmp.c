#include<stdio.h>
#include<string.h>

void main(){

	char *str1="Ajay";
	char *str2="Cjay";

	int diff=strcmp(str2,str1);

	printf("diff is %d\n",diff);

	if(diff==0){
	
		printf("String are equal:\n");
	}else{
	
		printf("String are not  equal:\n");

	}
}
