/*
 *
 D D D D
   C C C
     B B
       A
   
 */


#include<stdio.h>
	
	void main(){

		int rows;
		printf("Enter the rows:");
		scanf("%d",&rows);
		char ch='D';
		for(int i=1;i<=rows;i++){
			for(int sp=2;sp<=i;sp++){
				printf("\t");
			}
			
			for(int j=rows;j>=i;j--){
				printf("%c\t",ch);
				
			}
			ch--;
			printf("\n");
		}
	}

