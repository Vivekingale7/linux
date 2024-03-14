/*
 take value of rows from user 

 1 3 5 7 9
   9 7 5 3
     3 5 7
       7 5
         5

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
			
			if(i%2==0){
				printf("%d\t",x);
				x=x-2;
			}else{
				printf("%d\t",x);
				x=x+2;
			}
			}
			printf("\n");
		}
	}
