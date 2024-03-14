#include<stdio.h>

int DigonalSum(int (*ptr)[][2],int size){

	int sum=0;
	for(int i=0;i<size;i++){
	
		sum+=*(**ptr+i);
	}
	return sum;
}
int DigonalSum1(int arr[][2][2],int plane,int rows, int cols){

	int sum=0;
	for(int i=0;i<plane;i++){

		for(int j=0;j<rows;j++){
		
			for(int k=0;k<cols;k++){
		
			
	
					sum+=*(*(*(arr+i)+j)+k);
				
			}
		}
	
	}
	return sum;
}

void main(){

	int arr[2][2][2]={1,2,3,4,5,6,7,8};

	int arrSize=sizeof(arr)/sizeof(int);

	int sum1=DigonalSum(arr,arrSize);
	int sum2=DigonalSum1(arr,2,2,2);

	printf("Sum is : %d\n",sum1);
	printf("Sum is : %d\n",sum2);
}
