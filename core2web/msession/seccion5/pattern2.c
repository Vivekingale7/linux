 /*
      d
    c c
  b b b
a a a a  

*/

#include<stdio.h>
	void main(){
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);

		printf("\n");

		int x=96+rows;

		for(int i=1;i<=rows;i++){
			for(int sp=rows-1;sp>=i;sp--){
				printf("  ");
			}
			
			for(int j=1;j<=i;j++){
				printf("%c ",x);
			
			}
			x--;
			printf("\n");
		}
	}
