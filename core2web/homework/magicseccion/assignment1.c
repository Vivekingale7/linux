/*
 WAP to print all the divisors of given number

input:30
output: 1 2 3 5 6 15 30

*/

#include<stdio.h>
    	void main(){
		int input;

		printf("Enter the input:");
		scanf("%d ",&input);

		for (int i=1;i<=input;i++){
			if(input%i==0){
				printf("%d ",i);
			}
		}
	}
