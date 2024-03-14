#include<stdio.h>

void fun(int x,int y,int *add,int *sub){
	
	*add=x+y;
	*sub=x-y;

}
void main(){

	int x=10;
	int y=20;

	int add,sub;

	fun(x,y,&add,&sub);
	printf("%d %d\n",add,sub);
}
