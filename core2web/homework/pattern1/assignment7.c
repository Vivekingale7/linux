/* if the user take no of rows and column
 

   1   2   9   4
   25  6   49  8
   81 10  121  12
  169 14  225  16

  */


#include<stdio.h>
	void main(){
		int rows,column;

		printf("Enter the number of rows:\n");
		scanf("%d",&rows);
		printf("Enter the number of column:\n");
		scanf("%d",&column);

		int x=1;
		for(int i=1;i<=rows;i++){
			for(int j=1;j<=column;j++){
			if(x%2==0){
					printf("%2d  ",x++);
				}else{
					printf("%2d  ",x*x);
					x++;
				}
			}
				printf(" \n");
			}
	}
