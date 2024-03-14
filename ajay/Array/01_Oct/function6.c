// Passing function to a function


#include<stdio.h>


void add(int x,int y){

	printf("sum is: %d\n",x+y);
}

void fun(int x,int y,void(*ptr)(int,int)){               //pass function to function

	ptr(x,y);
}

void main(){

	fun(30,20,add);
}

/*
Output:

sum is: 50

*/
