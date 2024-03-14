#include<stdio.h>

int add(int x,int y){

	printf("%d\n",x+y);
}
int sub(int x,int y){

	printf("%d\n",x+y);
}
int mult(int x,int y){

	printf("%d\n",x+y);
}
int div(int x,int y){

	printf("%d\n",x+y);
}
void main(){

	void (*ptr[])(int,int)={add,sub,mult,div};
	
	for(int i=0;i<4;i++){
	
		ptr[i](10,20);
	}
}
