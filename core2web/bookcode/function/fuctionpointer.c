#include<stdio.h>
	int diff(int *x,int *y){
		printf("%d\n",*x,*y);
		return(*x-*y);
	}
	int sum(int x,int y){
		printf("%d\n %d\n",x,y);
		return x+y;
	}
	void main(){

		printf("start main\n");
		int y=20;
		int x=10;
		int add=sum(x,y);		//call by value
		int sub=diff(&x,&y);		//call by address

		printf("%d\n",add);
		printf("%d\n",sub);
	}	
