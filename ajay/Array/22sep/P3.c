#include<stdio.h>

void main(){

	int a=2;

	int x=++a - a++ + --a + a--; 

	printf("%d %d\n",a,x);
}
