/*
.WAP to create 2-D array of size given from user and assign that
array to another array of same size and print the second array.
*/

#include<stdio.h>
	void main(){

		int row,col;
		printf("Enter the size of the row:");
		scanf("%d,",&row);
		
		printf("Enter the size of the col:");
		scanf("%d,",&col);
		printf("\n");
		printf("enter the element:\n");
		int arr1[row][col];

		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
			scanf("%d",&arr1[i][j]);
		}

}

		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
				printf("%d\t",arr1[i][j]);
		}
				printf("\n");
			}
	}

