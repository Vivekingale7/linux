#include<stdio.h>

static int x=10;

void main(){

	extern int x;

	printf("%d\n",x);
}
