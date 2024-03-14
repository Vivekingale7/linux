#include<stdio.h>

void main(){


	FILE *fp=fopen("c2w.txt","w");

	printf("%ld\n",ftell(fp));

	fprintf(fp,"Core2web");
	printf("%ld\n",ftell(fp));

	fprintf(fp,"Biencaps");
	printf("%ld\n",ftell(fp));
	rewind(fp);

	printf("%ld\n",ftell(fp));



}
