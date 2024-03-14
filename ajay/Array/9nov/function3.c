#include<stdio.h>

int diff(int x,int y){

	int add=x+y;
	int sub=x-y;

	return add,sub;
}
void main(){

	int x=10;
	int y=5;
	
	printf("%d\n ",diff(x,y));
}
