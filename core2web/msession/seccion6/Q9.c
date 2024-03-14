/*
 take value of rows from user 

100 9   64 7
    36  5  16
        3   4
	    1
*/

#include<stdio.h>
	void main(){
		int rows,x;
		
		printf("Enter the rows:\n");
		scanf("%d",&rows);

		printf("Enter the value of x:\n");
		scanf("%d",&x);
		for(int i=1;i<=rows;i++){
			for(int sp=1;sp<i;sp++){
				printf("\t");
			}
			
			for(int j=rows;j>=i;j--){

			if((x)%2==0){
				printf("%d\t",x*x);

			}else{
				printf("%d\t",x);
			
			}

                        x--;

			}
		
			printf("\n");
		}
	}
