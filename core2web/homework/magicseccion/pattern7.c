/*
E D C B A
E D C B 
E D C 
E D 
E

*/


#include<stdio.h>
	
	void main(){

		int rows;
		printf("Enter the rows:");
		scanf("%d",&rows);

		for(int i=1;i<=rows;i++){
			char ch='E';
			for(int j=rows;j>=i;j--){
				printf("%c\t",ch);
				ch--;
			}
			printf("\n");
		}
	}

