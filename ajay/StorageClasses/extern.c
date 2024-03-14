#include<stdio.h>

extern void fun(){

	extern  int x;
	printf("%d\n",x);
}
void main(){

	int y=50;
	fun();

}
