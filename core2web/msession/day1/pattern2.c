/*1 2 3
 1 2 3
 1 2 3
 */

#include<stdio.h>
	void main(){
		int rows;

		printf("enter rows:\n");
		scanf("%d",&rows);
		
		for (int i=1;i<=rows;i++){
			for(int j=1;j<=rows;j++){
				printf("%d\t",j);
			
			}
			printf("\n");
		}
	}
