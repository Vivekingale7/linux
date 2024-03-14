/*
 take no of rows from user
 3 2 1
 c b a
 3 2 1
 c b a
 */






#include<stdio.h>
	void main(){
		int rows,column;

		printf("Enter the number of rows:\n");
		scanf("%d",&rows);


		for(int i=1;i<=rows;i++){
			int x=3;
			char ch='c';
			for(int j=1;j<=3;j++){
			   if(i%2==1){
				   printf("%d  ",x--);
			   }else{
				   printf("%c  ",ch--);
			   }
			}
			printf("\n");
		}
	}
