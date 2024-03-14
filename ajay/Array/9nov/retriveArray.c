#include<stdio.h>

int* fun(){

	int arr[]={10,20,30};
	int *ptr=arr;
	return ptr;
}
void main(){


	int *ptr=fun();

	printf("%d\n",*ptr);
	for(int i=0;i<3;i++){
	
		printf("%d\n",*(ptr+i));
	}
}
