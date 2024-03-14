/*
 4 3 2 1
 4 3 2
 4 3
 4
 */

#include<stdio.h>
	void main() {

		int rows,col;
		
		printf("enter the rows:");
		scanf("%d",&rows);
		
		printf("\n");

		printf("enter the col:");
		scanf("%d",&col);
		
		printf("\n");

		for(int i=4;i>=1;i--){
			int x=4;
			for(int j=1;j<=i;j++){
				printf("%d ",x);
				x--;
			}
			printf("\n");
		}
	}
