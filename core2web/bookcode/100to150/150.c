#include<stdio.h>
	int main(int value){
		printf("In fun");
		printf("%d\n",value);
		value=50;
		return value;
	}
	void main(){
		printf("Start main");
		int y=20;
		printf("%d\n",fun(y));
		printf("End main\n");
	
	}
