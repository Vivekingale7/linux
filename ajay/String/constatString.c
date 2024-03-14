#include<stdio.h>

void main(){

	char *str2="Virat";

	printf("%c\n",str2[2]);   // r

	str2[3]='K';

	printf("%c\n",str2[3]);   // segmentaion fault

}
