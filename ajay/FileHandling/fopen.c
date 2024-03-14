#include<stdio.h>

void main(){

	FILE *fp=fopen("success.txt","r");

	printf("%p\n",fp);
	
	FILE *fp1=fopen("success.txt","w");
	printf("%p\n",fp1);

}
