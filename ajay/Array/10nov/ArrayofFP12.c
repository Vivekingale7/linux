#include<stdio.h>

void sub(int x,int y){

	printf("sub is %d",x-y);
}
void fun(int x,int y,void (*ptr)(int,int)){

	ptr(x,y);
}
void main(){

	fun(20,10,sub);
}
