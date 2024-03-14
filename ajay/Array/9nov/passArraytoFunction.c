#include<stdio.h>

void fun(int *ptr, int arrsize){
	
	for(int i=0;i<arrsize;i++){
	
		printf("%d\n",ptr[i]);
	}


}
void main(){

	int arr[]={10,20,30,40,50};

	int arrsize=sizeof(arr)/sizeof(int);

	fun(arr,arrsize);
}
