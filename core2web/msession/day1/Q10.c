/*
1  3  5
7  9  11 
13 15 17
 */

#include<stdio.h>
	void main(){
		int rows;

		printf("enter rows:\n");
		scanf("%d",&rows);
		int x=1;
	

		for (int i=1;i<=rows;i++){
			for(int j=1;j<=rows;j++){
				printf(" %d\t",x);
				x+=2;
			
			}
			
			printf("\n");
		}
	}
