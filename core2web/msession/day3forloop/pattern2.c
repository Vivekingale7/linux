/*
 1 2 3 4
 1 2 3
 1 2
 1
 */

#include<stdio.h>
	void main() {

		int rows,col;
		
		printf("enter the rows:");
		scanf("%d",&rows);
		
		printf("\n");



		for(int i=rows;i>=1;i--){
			int x=1;
			for(int j=1;j<=i;j++){
				printf("%d ",x);
				x++;
			}
			printf("\n");
		}
	}
