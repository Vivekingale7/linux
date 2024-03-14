/*
 
1  2  3  4
5  6  7 
8  9
10


 */

#include<stdio.h>
	void main() {

		int rows,col,x=1;
		
		printf("enter the rows:");
		scanf("%d",&rows);
		printf("\n");

		for(int i=rows;i>=1;i--){
			
			for(int j=1;j<=i;j++){
				printf("%d ",x++);
				
			}
			printf("\n");
		}
	}
