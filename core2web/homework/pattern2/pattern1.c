/*take no of rows and column from user 
  4 3 2 1
  5 4 3 2
  6 5 4 3
  7 6 5 4
  */

#include<stdio.h>
	void main(){
		int x=4;
		int rows,column;

		printf("Enter the number of rows:\n");
		scanf("%d",&rows);
		printf("Enter the number of column:\n");
		scanf("%d",&column);

		for(int i=1;i<=rows;i++){
			for(int j=column;j>=1;j--){
				printf("%3d",x);
				x--;
				
			}
			printf("\n");
			x=rows+i;
		}
	}
