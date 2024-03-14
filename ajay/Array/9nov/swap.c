#include<stdio.h>

void swap(int x,int y){

	int temp=x;
	x=y;
	y=temp;
	
	printf("x is = %d\n",x);
	printf("y is = %d\n",y);

}

void main(){

	int x=10;
	int y=20;

	printf("x is = %d\n",x);
	printf("y is = %d\n",y);

	swap(x,y);
}
