#include<stdio.h>

void main(){

	int arr[3][3]={10,20,30,40,50,60,70,80,90};

	int size=sizeof(arr)/sizeof(int);

	for(int i=0;i<size;i++){
	
		printf("%d\n",*(*arr+i));
	}
	

}
