/*
 4 4 4 4
 3 3 3 3
 2 2 2 2
 1 1 1 1
 */

#include<stdio.h>
	void main(){
		int rows;

		printf("enter rows:\n");
		scanf("%d",&rows);
		
		for (int i=rows;i>=1;i--){
			for(int j=1;j<=rows;j++){
				printf("%d\t",i);
			
			}
			printf("\n");
		}
	}
