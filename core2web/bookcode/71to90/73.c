/*
 

  1  
  2  3  4
  5  6  7  8  9
  */

#include<stdio.h>
	void main(){

		int x=1;

		for (int i=1;i<=3;i++){
		   for(int j=1;j<=2*i-1;j++){
			  printf("%d ",x++);
		   }
		   printf("\n");
		}
	}
