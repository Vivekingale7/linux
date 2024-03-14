#include<stdio.h>

void main(){

	FILE *fp=fopen("ajay.txt","r");
	FILE *fp1=fopen("viraj.txt","w");

	char ch;
	int cnt=0;

	while((ch=fgetc(fp))!=EOF){
	
		if(cnt<10){
		
			fputc(ch,fp1);
		}else{
		
			break;
		}
		cnt++;
	}
}
