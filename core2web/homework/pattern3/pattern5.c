/* take no of rows from user
 
   1 4 3
   16 5 36
   7 64 9
   */

#include<stdio.h>
 void main(){

	int rows,column;

	printf("Enter the rows: ");
	scanf("%d",&rows);

	printf("Enter the column: ");
	scanf("%d",&column);
	int x=1;
	for(int i=1;i<=rows;i++){
		for(int j=1;j<=column;j++){
			if(x%2==0){

				printf("%d  ",x*x);
			}else{
				printf("%d  ",x);
				}
			x++;
		}

		printf("\n");
	}
 }
