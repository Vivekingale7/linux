/* take no of rows from the user

 D1 C2 B3 A4
 e5 f4 g3 h2
 F3 E4 D5 C6
 g7 h6 i5 j4

 */

#include<stdio.h>

void main(){

	int rows,column;
	
	printf("Enter the rows: ");
	scanf("%d",&rows);

	printf("Enter the column: ");
	scanf("%d",&column);
 	//int x=1;
      //  char ch='D';


	for(int i=1;i<=rows;i++){

		for(int j=column;j>=1;j--){

			if(i%2==1){

				printf("%c%d  ",'A'+j-column,column-j+i);
			}else{
				printf("%c%d  ",'a'+column+i-j+2,j+i-1);
			}
		}
		//ch=ch+2;
		//x=x+2;
		printf("\n");
}
}

