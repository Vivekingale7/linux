
#include<stdio.h>

void main(){

	int arr[3][3]={1,2,3,4,5,6,7,8,9};

	int sum=0;

	for(int i=0;i<3;i++){
	
		for(int j=0;j<3;j++){
		
			if(i==j){
			
				printf("%d\t",arr[i][j]);
				sum+=arr[i][j];
			}else{
			
				printf("%d\t",arr[i][j]);
			}
		}
		printf("\n");
	}

	printf("sum of diagonal is %d\n",sum);
}