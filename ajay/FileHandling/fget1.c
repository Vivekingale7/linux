#include<stdio.h>

void main(){

	FILE *fp=fopen("success.txt","r");

	char ch;
	int cnt=0;

	while((ch=fgetc(fp))!=EOF){
	
		cnt++;
	}
	printf("%d\n",cnt);
}
