#include<stdio.h>

void main(){

	FILE *fp=fopen("c2w.txt","w");

	printf("%ld\n",ftell(fp));

	fprintf(fp,"Core2web");
	printf("%ld\n",ftell(fp));
}
