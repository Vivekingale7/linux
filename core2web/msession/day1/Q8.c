/*
9 8 7
6 5 4
3 2 1
 */

#include<stdio.h>
	void main(){
		int rows;

		printf("enter rows:\n");
		scanf("%d",&rows);
		int var;
		printf("enter variable:\n");
		scanf("%d",&var);

		for (int i=rows;i>=1;i--){
			for(int j=1;j<=rows;j++){
				printf("%d\t",var);
				var--;
			
			}
			printf("\n");
		}
	}
