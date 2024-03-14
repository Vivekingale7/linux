#include<stdio.h>
	void main(){

		FILE *fp=fopen("Biencamps.txt","w");
		char ch;
		fscanf(stdin,"%c",&ch);
		printf("%c\n",ch);
	}
