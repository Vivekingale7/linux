/*
 
4 3 2 1
3 2 1
2 1
1


 */

#include<stdio.h>
	void main() {

		int rows,col,x=4;
		
		printf("enter the rows:");
		scanf("%d",&rows);
		printf("\n");


		for(int i=rows;i>=1;i--){
			
			for(int j=1;j<=i;j++){
				printf("%d ",x--);
				
			}
			x=rows-1;
			printf("\n");
		}
	}
