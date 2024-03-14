#include<stdio.h>

void fun(int x,int y,int *add,int *mult){

	*add=x+y;
	*mult=x*y;
}
void main(){

	int x=10;
	int y=20;

	int add,mult;

	fun(x,y,&add,&mult);

	printf("%d %d\n",add,mult);
}
