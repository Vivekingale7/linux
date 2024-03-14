/* if possible take no of from user
   	
 A B C D 
 B C D E 
 C D E F
 D E F G

 */

#include<stdio.h>
	void main(){
		int rows,column;
		char ch='A';
		printf("Enter the number of rows:\n");
		scanf("%d",&rows);
		printf("Enter the number of column:\n");
		scanf("%d",&column);

		for(int i=1;i<=rows;i++){
			for(int j=1;j<=column;j++){
				printf("%c ",ch);
				ch++;
			}
			printf("\n");
			ch=ch-3;

		}
	}
