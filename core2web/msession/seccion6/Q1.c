/*
 take value of rows from user 

 * * * *
   * * *
     * *
       *
*/

#include<stdio.h>
	void main(){
		int rows;
		printf("Enter the rows:\n");
		scanf("%d",&rows);

		for(int i=1;i<=rows;i++){
			for(int sp=1;sp<i;sp++){
				printf("\t");
			}
			for(int j=rows;j>=i;j--){
				printf("*\t");
			}
			printf("\n");
		}
	}
