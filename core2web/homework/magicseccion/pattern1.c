/*
 
   * _  _  _
   _ *  _  _
   _ _  *  _
   _ _  _  *

*/

#include<stdio.h>
	void main(){
		int rows;

		printf("Enter the rows:");
		scanf("%d",&rows);

		for (int i=1;i<=rows;i++){
			for(int j=1;j<=rows;j++){
				if(j==i){
					printf("  *  ");
				}else{
					printf("  -  ");
				}
			}
			printf("\n");
		}
	}
