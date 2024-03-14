/*
 1   3  8
 15  24 35
 48  63 80
*/ 


#include<stdio.h>
	void main(){
		int rows,column;
		
		printf("Enter the number of rows:\n");
		scanf("%d",&rows);	
		printf("Enter the number of column:\n");
		scanf("%d",&column);		
		int x=1;
		for(int i=1;i<=rows;i++){
			for(int j=1;j<=column;j++){
				printf("%d ",x*x-1);
				x++;	
			}
			printf("\n");
					
		}
	}
	}
