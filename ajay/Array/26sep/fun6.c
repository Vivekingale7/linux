#include<stdio.h>

int diff (int* x,int* y){

	//printf("%d\n %d\n",*x,*y);

	return *x-*y;
}
int sum (int x,int y){

	//printf("%d\n %d\n",x,y);

	return x+y;
}

void main(){

	printf("Start main\n");
	int y=20;
	int x=10;

	int add=sum(x,y);
	int sub=diff(&x,&y);
	printf("%d\n",add);
	printf("%d\n",sub);
	printf("end main\n");

}
