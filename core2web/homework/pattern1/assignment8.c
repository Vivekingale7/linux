/* if the user take rows and column
1   3   5
7   9   11
13  15  17

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
			for (int j=1;j<=column;j++){
				printf("%d  ",x++);
				x++;
			}
			printf("\n");
		}
	}
