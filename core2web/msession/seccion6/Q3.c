/*
 take value of rows from user 

1 2 3 4
  1 2 3
    1 2
      1

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
			int x=1;
			for(int j=rows;j>=i;j--){
				printf("%d\t",x++);
			}
			
			printf("\n");
		}
	}
