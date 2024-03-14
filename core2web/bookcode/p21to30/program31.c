#include<stdio.h>
void main(){
	int x=1;
	printf("start main\n");
	if (--x){
	printf("in first if block \n");
	}
	if (++x || x++){
		printf("in second if block");
	}
	printf("x=%d\n",x);
	printf("end code\n");
}

