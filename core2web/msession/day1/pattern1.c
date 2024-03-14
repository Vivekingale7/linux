#include<stdio.h>
	void main(){
		int rows,ch=97;

		printf("enter rows:\n");
		scanf("%d",&rows);
		
		for (int i=1;i<=rows;i++){
			for(int j=1;j<=rows;j++){
				printf("%c\t",ch);
				ch++;
			}
			printf("\n");
		}
	}
