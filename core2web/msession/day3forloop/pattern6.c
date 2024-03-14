/*
 
a b c d 
a b c
a b 
a


 */

#include<stdio.h>
	void main() {

		int rows,col,x=4;
		
		printf("enter the rows:");
		scanf("%d",&rows);
		printf("\n");


		for(int i=rows;i>=1;i--){

			int ch=97;
			
			for(int j=1;j<=i;j++){
				printf("%c ",ch++);
				
			}
		
			printf("\n");
		}
	}
