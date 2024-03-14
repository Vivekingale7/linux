// digonal sum
#include<stdio.h>

int fun1(int (*ptr)[3],int rows, int cols){
	
	int sum=0;
	for(int i=0;i<rows*cols;i+3){
			
		sum=sum+*(*ptr+i);
			
	}
}



int  fun(int (*ptr)[3],int size){
	
	int sum=0;
	for(int i=0;i<size;i+3){
		
			sum=sum + *(*ptr+i);
	}
	printf("sum is %d\n",sum);
}

void main(){

	int arr[3][3]={1,2,3,4,5,6,7,8,9};

	int size=sizeof(arr)/sizeof(int);

	int sum=fun(arr,size);
	int sum1=fun1(arr,3,3);

	printf("fun sum: %d",sum);
	printf("fun sum1: %d",sum1);
}
