#include<stdio.h>
	void main(){
		int rows;
		printf("Enter the rows:\n");
		scanf("%d",&rows);
		int x=1;

		for(int i=1;i<=rows;i++){
			for(int j=1;j<=rows;j++){
				printf("%d\t",x);
				x=x+3;
			}
			printf("\n");
		}
	}
