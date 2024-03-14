/* take no of rows from user 
 *
 a B c D
 b C d
 c D e
 d E f

 */

#include<stdio.h>
void main(){

	int rows,column;
	char ch='a';


	printf("Enter the rows: ");
	scanf("%d",&rows);

	printf("Enter the column: ");
	scanf("%d",&column);

	for(int i=1;i<=rows;i++){

		for(int j=1;j<=column;j++){

			if(j%2==1){

				printf("%c ",ch++);
				ch++;
			}else{
				printf("%c  ",ch+33);
			
			}
			ch='a'+i-1;
		}
			printf("\n");
		}
}
