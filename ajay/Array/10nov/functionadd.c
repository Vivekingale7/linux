#include<stdio.h>

int fun(int ptr[],int size1){

	int sum=0;

	for(int i=0;i<size1;i++){
	
		sum+=ptr[i];
	}
 	return sum;
}
void main(){

	int arr[]={10,20,30,40,50};

	int sizearr=sizeof(arr)/sizeof(int);

	int sum=fun(arr,sizearr);
	printf("sum is: %d\n",sum);
}
