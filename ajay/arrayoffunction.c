#include<stdio.h>

void fun(int *ptr,int size){

	printf("%d\n",*ptr);
	/*for(int i=0;i<size;i++){
		
		printf("%d ",*(ptr+i));
	}*/
}
void main(){

	int arr[]={10,20,30,40,50};

	int size=sizeof(arr)/sizeof(int);
	int *ptr=&arr;

	fun(ptr,size);
}