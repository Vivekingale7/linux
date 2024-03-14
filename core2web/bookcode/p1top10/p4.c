#include<stdio.h>
 int a=10 //global variable

 void fun(){
	 int x=20;
	 printf("in fun\n");
 }
void main(){
	int y=30; // local variable
	printf("start main\n");
	fun();
	printf("end main\n");
}
