/*
 
   1 2 3 4
   1 3 5 7
   1 4 7 10
   1 5 9 13

   */



#include<stdio.h>
	void main(){
		int x=1;
		for (int i=1;i<=4;i++){
			
			for(int j=1;j<=4;j++){
				printf("%d  ",x);
				x=x+i;	
			}
			printf("\n");
			x=1;
		}
	}
