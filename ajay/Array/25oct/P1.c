#include<stdio.h>

void main(){

	int arr[]={1,2,3,4,5},arr2[5];

	for(int i=0;i<=4;i++){
	
		 arr2[i]=arr[i];
	}
	int arr3=arr2;

	for(int i=0;i<=4;i++){
	
		 printf("%d\n",arr3[i]);
	}
	
}
