/*
 
* * * *
* * *
* *
*


 */

#include<stdio.h>
	void main() {

		int rows,col;
		
		printf("enter the rows:");
		scanf("%d",&rows);
		
		printf("\n");

	for(int i=rows;i>=1;i--){
			
			for(int j=1;j<=i;j++){
				printf(" * ");
				
			}
			printf("\n");
		}
	}
