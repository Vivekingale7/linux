#include<stdio.h>

int sum(int,int);

void main(){

	int x=0;

	int(*ptr)(int,int)=&sum;

	x=(ptr)(2,3);

	printf("%d\n",x);


}

int sum(int a,int b){

	return a+b;
}

