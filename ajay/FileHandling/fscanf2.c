#include<stdio.h>

void main(){

	FILE *fp=fopen("c2w.txt","r");

	char ch;
	fscanf(fp,"%c",&ch);
	printf("%c\n",ch);
}
