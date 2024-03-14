/*#include<stdio.h>
	void main(){
	for (int i=1;i<=5;i++){
		for(int sp=4;sp>=i;sp--){
			printf(" - ");
		}
		for(int j=1;j<=i;j++){
			printf(" * ");
		}
		printf("\n");
       }
}
*/

#include<stdio.h>

	void main(){
		int rows,column;

		printf("Enter the rows:\n");
		scanf("%d",&rows);

		printf("Enter the column:\n");
		scanf("%d",&column);

		for (int i=1;i<=rows;i++){
			for (int sp=rows-1;sp>=i;sp--){
				printf(" - ");
			}
		 for(int j=1;j<=i;j++){
			 printf(" * ");
		 }
		 printf("\n");
		}
	}
