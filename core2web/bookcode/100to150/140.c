#include<stdio.h>
	void main(){
		int arr, plane,row,column;
		
		printf("enter the plane:\n");
		scanf("%d",&plane);

		printf("enter the row:\n");
		scanf("%d",&row);
		
		printf("Enter the column:\n");
		scanf("%d",&column);

		for(int i=0;i<plane;i++){
			for(int j=0;j<row;j++){
				for(int k=0;k<column;k++){
					scanf("%d",&arr[i][j][k]);
				}
				printf("\n");
			}
		}
	}
