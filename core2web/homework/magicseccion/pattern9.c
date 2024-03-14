/*
        1
      1 2
    1 2 3
  1 2 3 4

*/


#include<stdio.h>
	
	void main(){

		int rows;
		printf("Enter the rows:");
		scanf("%d",&rows);

		for(int i=1;i<=rows;i++){
			for(int sp=rows-1;sp>=i;sp--){
				printf("\t");
			}
			int x=1;
			for(int j=1;j<=i;j++){
				printf("%d\t",x);
				x++;
			}
			printf("\n");
		}
	}

