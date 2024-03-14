#include<stdio.h>

int add(int x,int y){

	x=x+1;
	y=y+1;

	return x+y;

}
int sub(int *x,int *y){

	*x=*x+1;
	*y=*y+1;

	return *x-*y;

}
void main(){

	int x=10;
	int y=40;

	int add1=add(x,y);
	int sub1=sub(&x,&y);

	printf("sum is : %d\n",add1);
	printf("sum is : %d\n",sub1);
}
