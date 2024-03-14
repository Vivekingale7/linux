/* 
 
   D4 C3 B2 A1
   D4 C3 B2 A1
   D4 C3 B2 A1
   D4 C3 B2 A1

 */






#include<stdio.h>
	void main(){
		int rows,column;

		printf("Enter the number of rows:\n");
		scanf("%d",&rows);
		printf("Enter the number of column:\n");
		scanf("%d",&column);

		for(int i=1;i<=rows;i++){
			char ch='D';
			int x=4;
			for(int j=1;j<=column;j++){
				printf("%c%d  ",ch--,x--);
			}
			printf("\n");
		}
	}
