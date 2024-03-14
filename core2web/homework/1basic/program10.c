/*
10.Write a program to print the product of the first 10 numbers
*/

#include<stdio.h>

void main(){

	int size;
	int product = 1;

	printf("product of numbers\n");
	printf("how many odd numbers do you want :");
	scanf("%d",&size);

	for(int i = 1; i<=size; i++){
		
			product=product*i;
	}
		  	printf("%d\n",product);
}
/*
OUTPUT :
product of numbers
how many odd numbers do you want :10
3628800

*/
