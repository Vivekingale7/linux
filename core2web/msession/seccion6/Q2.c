/*
 take value of rows from user 

 1 2 3 4
   5 6 7
     8 9
       10

*/

#include<stdio.h>
	void main(){
		int rows,x=1;
		printf("Enter the rows:\n");
		scanf("%d",&rows);

		for(int i=1;i<=rows;i++){
			for(int sp=1;sp<i;sp++){
				printf("\t");
			}
			for(int j=rows;j>=i;j--){
				printf("%d\t",x++);
			}
			
			printf("\n");
		}
	}
