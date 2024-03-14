#include<stdio.h>

void add(int x,int y){
	
	printf("1.%d\n",x+y);
	printf("2.%d\n",x+y);
	printf("3.%d\n",x+y);

}
void main(){

	void (*fptr) (int ,int);

	fptr=add;
	fptr(10,20);
	fptr++;

	fptr(20,20);
	fptr++;

	fptr(30,20);
}
