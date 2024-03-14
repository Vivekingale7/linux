#include<stdio.h>

int diff (int x,int y){

	int add=x+y;
	int sub=x-y;

	printf("%d\n %d\n",add,sub);

	return add,sub;
}

void main(){

	printf("Start main\n");
	int y=20;
	int x=10;

//	int ret=diff(x,y);

	printf("%d\n",diff(x,y));
	
	printf("end main\n");

}

