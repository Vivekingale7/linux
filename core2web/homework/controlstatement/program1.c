/*WAP to find the sum of number that are not divisible by 3 up to a given number
input :10
output:sum of number is not divisible by 3vis 37*/

#include<stdio.h>
	void main(){
		int x,sum=0;

		printf("enter the number\n");
		scanf("%d",&x);

                 

		for (int i=x;i<=sum;i++){
			if( i%3==0){
				printf("sum of the number is divisible by 3\n");
	                  }if (i%3!=0){
				printf(" sum of the number is not divisible by 3\n");
			} sum=sum+i;
		}
	}

