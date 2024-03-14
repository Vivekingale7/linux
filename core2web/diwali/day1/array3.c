/*WAP to create 3-D array of size given by user and print the sum of
all left diagonal elements.

*/

#include<stdio.h>
	void main(){
		int plane,row,col,planename;

		printf("enter the plane:");
		scanf("%d",&plane);
		printf("\n");
		
		printf("enter the row:");
		scanf("%d",&row);
		printf("\n");
		
		printf("enter the col:");
		scanf("%d",&col);
		printf("\n");

		int arr[plane][row][col];
		printf("enter the element:");

	for(int i=0;i<plane;i++){
		for(int j=0;j<row;j++){
			for(int k=0;k<col;k++){
				scanf("%d",&arr[i][j][k]);
			}
			printf("\n");
		}
			printf("\n");
	}

	printf("from which plane you want to print digonal element:");
	scanf("%d",&planename);


		for(int j=0;j<row;j++){
			for(int k=0;k<col;k++){
			
			if(j==k){
				printf("%d",arr[planename][j][k]);
			}
			}
			printf("\n");
		}	
	}
