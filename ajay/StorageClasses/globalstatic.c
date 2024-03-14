#include<stdio.h>

static int x=10;
void fun(){
	++x;

}
void main(){

	fun();
	printf("%d\n",x);
	fun();
	printf("%d\n",x);
	fun();
	printf("%d\n",x);
}
