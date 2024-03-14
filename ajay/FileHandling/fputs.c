#include<stdio.h>

void main(){

	FILE *fp=fopen("ajay.txt","a");

	char cname[]="Byju's";

	fputs(cname,fp);
	puts(cname);
}
