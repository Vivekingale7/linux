#include<stdio.h>

int fun( int val){

	printf("In fun\n");
	printf("%d\n",val);
	val=50;
	return val;
}
void main(){

	printf("Start main\n");
	int y=20;
	printf("%d\n",fun(y));
	printf("end main\n");

}
