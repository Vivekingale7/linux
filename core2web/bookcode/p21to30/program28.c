#include<stdio.h>
void main(){
	int income;
	printf("enter income\n");
	scanf("%d",&income);
	printf("your income in %d\n",income);
	if (income>=0 && income <=500000){
		printf("you want to pay 0 tax");
	}
	if (income>=500000 && income<=10000000){
		printf("you want to pay 15 tax");
	}
	if (income>=10000000 && income<=15000000){
		printf("you want to pay 20 tax");
	}
}
