#include<stdio.h>

int swap(int x,int y){

	int temp=x;
	x=y;
	y=temp;
}

void main(){

	printf("Start main\n");
	int x=10;
	int y=20;
      
	swap(x,y);
	printf("%d %d\n",x,y);
	
	printf("end main\n");

}

