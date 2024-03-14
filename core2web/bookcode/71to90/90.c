//assigning array to an array


#include<stdio.h>
	void main(){
		int arr[3]={10,20,30};
		for(int i=0;i<3;i++){
			printf("%d",arr[i]);
		}
		int arr2[3];
		arr=arr2;	
		for(int i=0;i<3;i++){
			printf("%d",arr2[i]);
		}
	}
