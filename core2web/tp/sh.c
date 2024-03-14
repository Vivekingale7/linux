#include<stdio.h>
   void main(){
	   int x=4;
	   for(int i=1;i<=4;i++){
		   for(int j=4;j<=i-1;j++){
			   printf("%d",x);
			   x++;
		   }
	   }printf("\n");
   }
