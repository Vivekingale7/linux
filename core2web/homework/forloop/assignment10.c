/* WAP to print the number is a given range and their multiplicative inverse.

   suppose x is a number then it's multiplicative  inverse or reciprocal is 1/x.

   the expected output for range 1-5
   1=1
   2=1/2 i.e 0.5
   3=1/3 i.e o.33
   4=0.25
   5=0.20
   */

#include<stdio.h>
	void main(){
		int x,y;
		float num,temp;

		printf("enter the number:\n");
		scanf("%d",&x);

		printf("enter the number:\n");
		scanf("%d",&y);

		printf("enter the number:\n");
		scanf("%f",&num);
		for (int i=x;i<=y;i++){
			temp=num/i;
			 printf("%f/%d multiplicative reciprocal is =%f\n",num,i,temp);

		}
		printf("\n");
	}
