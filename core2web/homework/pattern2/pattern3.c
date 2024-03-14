/*
 take no of rows from user
 4 4 4 4
 3 3 3 3 
 2 2 2 2
 1 1 1 1
 */






#include<stdio.h>
	void main(){
//		int rows;

//		printf("Enter the number of rows:\n");
//		scanf("%d",&rows);
			
		int x=4;

		for(int i=1;i<=4;i++){
			for(int j=1;j<=4;j++){
	   			   printf("%d  ",x);
			   }
			
			printf("\n");
			x--;
		}
	}
