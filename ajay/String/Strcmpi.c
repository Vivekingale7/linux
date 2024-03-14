#include<stdio.h>
#include<string.h>

int mystrcmpi(char* str1,char* str2){

	if(*str1==*str2 ||*str1==*str1+32 || *str1==*str1-32){
	
		str1++;
		str2++;
	}else{
	
		return *str1-*str2;
	}
}
void main(){

	char *str1="Ashish";
	char *str2="ashish";
	int diff;

	if(strlen(str1)==strlen(str2)){
	
		 diff=mystrcmpi(str1,str2);
	}
	printf("%d",diff);
	if(diff==0){
	
		printf("String are equal\n");
	}else{
	
		printf("String are not equal\n");

	}
}
