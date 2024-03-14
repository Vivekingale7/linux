#include<stdio.h>

void fun(int ele){

	printf("%d ",ele);

}

void main(){

	int arr[]={10,20,30,40};

	for(int i=0;i<4;i++){
	
		fun(arr[i]);
	}
}
