#include<stdio.h>
 void main(){
	 int x,y;

	 printf("enter the number :" );
	 scanf("%d %d", &x,&y);
	
	 if(x>y){
		 printf("%d has the maximum value",x);
	}
	if(y>x){
	       printf("%d has the maximum value",y);
	}
	else{
		printf("%d and %d has same value",x,y);
	}
 }
