#include<stdio.h>

int sum(int a,int b){

	return a+b;
}
void main(){

	int x=10;
	int (*ptr)(int ,int)=&sum;
	x=(ptr)(2,3);
	printf("%d\n",x);
}
