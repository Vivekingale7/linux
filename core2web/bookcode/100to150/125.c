#include<stdio.h>
	void main(){
		int row,column,sum=0;
		printf("Enter the rows:\n");
		scanf("%d",&row);
		
		printf("Enter the column:\n");
		scanf("%d",&column);
		
		printf("enter the element:\n");

		int arr[row][column];
		for(int i=0;i<row;i++){
			for(int j=0;j<column;j++){
				scanf("%d",&arr[i][j]);
			}
		}
		for(int i=0;i<row;i++){
			for(int j=0;j<column;j++){
				sum=sum+arr[i][j];
			}
		}
		printf("the sum of element is %d",sum);
	}
	
