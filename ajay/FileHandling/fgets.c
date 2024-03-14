#include<stdio.h>

void main(){

	FILE *fp=fopen("ajay.txt","r");
	
	char cname[20];

	fgets(cname,12,fp);

	puts(cname);
}
