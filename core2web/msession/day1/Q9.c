/*
A A A
B B B
C C C
 */

#include<stdio.h>
	void main(){
		int rows;

		printf("enter rows:\n");
		scanf("%d",&rows);
		char ch=65;
		//printf("enter variable:\n");
		//scanf("%d",&var);

		for (int i=1;i<=rows;i++){
			for(int j=1;j<=rows;j++){
				printf(" %c\t",ch+i-1);
				
			
			}
			
			printf("\n");
		}
	}
