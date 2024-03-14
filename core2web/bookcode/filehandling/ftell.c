#include<stdio.h>
	void main(){
		FILE *fp =fopen("info.txt","w");
		printf("%d\n",ftell(fp));
		fprintf(fp,"core2web");
		printf("%ld\n",ftell(fp));  //0
		rewind(fp);
		fprintf(fp,"Biencamps");  //8
	}
