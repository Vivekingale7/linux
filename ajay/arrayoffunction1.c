#include<stdio.h>

void fun(int x){

	printf("%d ",x);
}

void main(){

	int arr[]={10,20,30,40,50};

	int size=sizeof(arr)/sizeof(int);
	
	for(int i=0;i<size;i++){
	
		fun(arr[i]);
	}
}
