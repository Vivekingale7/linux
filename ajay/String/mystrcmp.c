#include<stdio.h>

int mystrcmp(char *str1,char *str2){

	while(*str1!='\0'){
	
		if(*str1==*str2){
		
			str1++;
			str2++;
		}else{
		
			return *str1-*str2;
		}
	}
}
void main(){

	char *str1="Shashi";
	char *str2="ahash";

	int diff=mystrcmp(str1,str2);

	printf("%d\n",diff);

}
