//wap to find maximum amout of 2 number.take all the value from user 
//input 2 3
//output 2

#include<stdio.h>
void main(){
	int x;
	int y;

	printf("enter the input x:\n");
	scanf("%d",&x);

	printf("enter the input y:\n");
	scanf("%d",&y);

	if(x>y){
		printf("x is maximum\n" );
	}
	if(x<y){
	      printf("y is maximum");
	}else {
		printf("x and y values are same ");
	}
}