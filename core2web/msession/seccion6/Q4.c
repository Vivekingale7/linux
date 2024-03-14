/*
 take value of rows from user 

d d d d
  c c c
    b b
      a

*/

#include<stdio.h>
	void main(){
		int rows;
		
		printf("Enter the rows:\n");
		scanf("%d",&rows);

		char ch=96+rows;
		for(int i=1;i<=rows;i++){
			for(int sp=1;sp<i;sp++){
				printf("\t");
			}
			
			for(int j=rows;j>=i;j--){
				printf("%c\t",ch);
			}
			ch--;
			printf("\n");
		}
	}
