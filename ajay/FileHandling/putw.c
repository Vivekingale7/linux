#include<stdio.h>

void main(){

	FILE *fp=fopen("ajay.txt","w");

	int num1=10;
	int num2=20;

	int num3=30;
	int num4=40;

	printf("%ld\n",ftell(fp));

	putw(num1,fp);
	putw(num2,fp);
	putw(num3,fp);
	putw(num4,fp);
	printf("%ld\n",ftell(fp));

	rewind(fp);

	printf("%d\n",getw(fp));
	printf("%d\n",getw(fp));
	printf("%d\n",getw(fp));
	printf("%d\n",getw(fp));
}
