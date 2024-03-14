#include<stdio.h>

int DigonalSum(int (*ptr)[],int size){

	int sum=0;
	for(int i=0;i<size;i+=4){
	
		sum+=*(*ptr+i);
	}
	return sum;
}
int DigonalSum1(int (*ptr)[3],int rows, int cols){

	int sum=0;
	for(int i=0;i<rows;i++){

		for(int j=0;j<cols;j++){
		
			if(i==j){
	
				sum+=*(*(ptr+i)+j);
			}
		}
	
	
	}
	return sum;
}

void main(){

	int arr[3][3]={1,2,3,4,5,6,7,8,9};

	int arrSize=sizeof(arr)/sizeof(int);

	int sum1=DigonalSum(arr,arrSize);
	int sum2=DigonalSum1(arr,3,3);

	printf("Sum is : %d\n",sum1);
	printf("Sum is : %d\n",sum2);
}
