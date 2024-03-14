#include<stdio.h>

void main(){

	FILE *fp=fopen("ajay.txt","r");
	FILE *fp1=fopen("sucess1.txt","w");

	char ch;

	while((ch=fgetc(fp))!=EOF){
		
		fputc(ch,fp1);		

	}

}


