/*
 take value of rows from user 

4 3 2 1
  3 2 1
    2 1
      1

*/

#include<stdio.h>
	void main(){
		int rows;
		
		printf("Enter the rows:\n");
		scanf("%d",&rows);
		
		int x=rows;
		for(int i=1;i<=rows;i++){
			for(int sp=1;sp<i;sp++){
				printf("\t");
			}
			
			for(int j=rows;j>=i;j--){
				

				printf("%d\t",x);
			        x--; 
			}
		
			printf("\n");
	}
}	
