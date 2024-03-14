#include<stdio.h>

void main(){

	FILE *fp=fopen("biencaps.txt","w");

	char ch;
	fscanf(stdin,"%c",&ch);
	printf("%c\n",ch);
}
