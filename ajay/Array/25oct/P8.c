#include<stdio.h>

void main(){

	int x=10;
	int y=20;
	int z=30;

	int *arr[]={&x,&y,&z};

	for(int i=0;i<3;i++){
	
		printf("%d\n",*(arr[i]));
	}
}
