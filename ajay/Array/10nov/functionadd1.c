#include<stdio.h>

void main(){

	int arr[2][2][2]={10,20,30,40,50,60,70,80};

	int size=sizeof(arr)/sizeof(int);

	for(int i=0;i<size;i++){
	
		printf("%d\n",*(**arr+i));
	}
	

}
