#include<stdio.h>

void add(int x,int y){
	
	printf("add is : %d\n",x+y);

}
void sub(int x, int y){

	printf("sub is : %d\n",x-y);
}
void main(){

	int x=10;
	int y=20;

	void (*fptr)(int ,int);

	fptr=add;
	fptr(x,y);

	fptr=sub;
	fptr(x,y);
}
