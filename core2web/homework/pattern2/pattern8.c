/*
 take no of rows from the user 

 18 16 14 
 12 10 8
 6  4  2
 */

#include<stdio.h>
	void main(){

		int rows,column;

		printf("Enter the number of rows:\n");
		scanf("%d",&rows);
			
		printf("Enter the number of column:\n");
		scanf("%d",&column);
		
		int x=18;
		
		for(int i=1;i<=rows;i++){
			for(int j=1;j<=column;j++){
				printf("%d  ",x);
				x=x-2;
			}
			printf("\n");
		}
	}
