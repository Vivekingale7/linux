/*
 take no of rows from the user

 D4 C3 B2 A1
 A1 B2 C3 D4
 D4 C3 B2 A1
 A1 B2 C3 D4

 */

#include<stdio.h>

void main(){

	int rows,column;
	int x=4;
	char ch='D';


	printf("Enter the rows: ");
	scanf("%d",&rows);

	printf("Enter the column: ");
	scanf("%d",&column);

	for(int i=1;i<=rows;i++){

		for(int j=1;j<=column;j++){

			if(i%2==1){
				
				printf("%c%d  ",ch--,x--);
			}else{
				printf("%c%d  ",++ch,++x);
			}
		}

		printf("\n");
}
}

