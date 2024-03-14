#include<stdio.h>

void main(){

	FILE *fp=fopen("viraj.txt","r");

	fseek(fp,10,0);
	
	char ch;
	
	while((ch=fgetc)!=EOF){
	
		printf("%c",ch);
	}
}
