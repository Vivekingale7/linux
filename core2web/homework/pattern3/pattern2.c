/*take no of rows from the user
 

  3 b 1 a
  a 2 c 0
  3 b 1 d
  a 2 c 0

  */

#include<stdio.h>

 void main(){

	int rows,column;
	int x;
	char ch='a';


	printf("Enter the rows: ");
	scanf("%d",&rows);
       
                                
	printf("Enter the column: ");
	scanf("%d",&column);

	for(int i=1;i<=rows;i++){
        	int x=rows-1;
       	        char ch='a';

		for(int j=1;j<=column;j++){

			if((i+j)%2==0){

				printf("%d  ",x);
				
			}else{
				printf("%c  ",ch);
				
			}
			x--;
			ch++;	
		}
		printf("\n");
		}
}

