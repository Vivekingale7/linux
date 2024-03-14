/*
 
   2  5  10
   17 26 37
   50 65  82


 */

#include<stdio.h>
	void main(){
		int rows,column,num=1,y=1;

		printf("Enter the number of rows:\n");
		scanf("%d",&rows);
		printf("Enter the number of column:\n");
		scanf("%d",&column);

		int x=0;
		for(int i=1;i<=rows;i++){
			for(int j=1;j<=column;j++){
				x=y+num;
				printf("%d ",x);
				y=x;
				num=num+2;
			}
			printf("\n");
		}
	}

