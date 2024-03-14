/*
 
1 2 3 4 5
2 3 4 5
3 4 5
4 5
5


 */

#include<stdio.h>
	void main() {

		int rows,x=1;
		
		printf("enter the rows:");
		scanf("%d",&rows);
		printf("\n");


		for(int i=rows;i>=1;i--)
		{
			
			for(int j=rows;j>=rows-1;j--)
			{
				printf("%d |  ",j);
			}
			
			printf("\n");
		}
	}
