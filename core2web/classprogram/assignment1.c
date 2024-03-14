//assignment1
//WAP to take check weather the input is leap year or not(basic leap year)

#include<stdio.h>
void main(){
   int x;
   printf("enter the leap year:");
   scanf("%d",&x);
	   if (x%4==0){
		   printf("%d is a leap year",x);
	   } else {
		   printf(" %d is not a leap year",x);
	   }
}
