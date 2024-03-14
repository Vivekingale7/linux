#include<stdio.h>

int mult(int x,int y){

	return x*y;
}
void main(){

	int x=10;
	int y=20;

	int (*fptr)(int , int)=&mult;
	int mult=fptr(10,20);

	printf("%d\n",mult);
}
