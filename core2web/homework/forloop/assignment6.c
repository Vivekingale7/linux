//WAP to calculate the factorial of given number

#include<stdio.h>
	void main(){
		long x,fact=1;
		printf("enter the number:");
		scanf("%ld",&x);
		
		for(int i=1;i<=x;i++){
			fact=fact*i;
		}
	       printf("fact of %ld is %ld",x,fact);
	}

