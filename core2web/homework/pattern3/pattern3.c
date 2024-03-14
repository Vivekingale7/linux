/* take no of rows from the user
 

   4 a 3 b
   4 a 3 b
   4 a 3 b
   4 a 3 b

   */

#include<stdio.h>

  void main(){

	int rows,column;

	printf("Enter the rows: ");
	scanf("%d",&rows);

	printf("Enter the column: ");
	scanf("%d",&column);

	for(int i=1;i<=rows;i++){
            int x=4;
            char ch='a';
		for(int j=1;j<=column;j++){

			if(j%2==0){

				printf("%c  ",ch++);
			}else{
				printf("%d  ",x--);
			}
		}

		printf("\n");
}
}
