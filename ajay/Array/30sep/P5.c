#include<stdio.h>

void add(int ,int);
void sub(int ,int);
/*
void add(int x,int y){

	printf("%d\n",x+y);
}
void sub(int x,int y){

	printf("%d\n",y-x);
}*/
	void display(void (*fptr)(int,int)){
	
		fptr(10,20);
	}
void main(){

	int x=10;
	int y=20;

	//void(*fptr)(int,int);

	display(add);
	//fptr(x,y);
	display(sub);
	//fptr(x,y);

}

void add(int x,int y){

	printf("%d\n",x+y);
}
void sub(int x,int y){

	printf("%d\n",y-x);
}
