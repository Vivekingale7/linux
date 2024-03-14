/* take the rows from the user
 
   I H G
   F E D
   C B A
   */


#include<stdio.h>
	void main(){
		int rows,column;

		printf("Enter the number of rows:\n");
		scanf("%d",&rows);
		printf("Enter the number of column:\n");
		scanf("%d",&column);
		char ch='I';
		for(int i=1;i<=rows;i++){
			for(int j=1;j<=column;j++){
				printf("%c ",ch--);
			}
		printf("\n");
		
		}
	}
