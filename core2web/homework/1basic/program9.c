/*
9. Write a program to print the sum of the first 10 odd numbers
*/

#include<stdio.h>

void main(){

	int size;
	int sum = 0;
	int x=1;

	printf("sum of odd numbers\n");
	printf("how many odd numbers do you want :");
	scanf("%d",&size);

	for(int i = 1; i<=size; i++){
		if (x%2==1){
			
			sum=sum+x;
			x=x+2;
		}
	}
		  	printf("%d\n",sum);
}
/*
OUTPUT :
sum of odd numbers
how many odd numbers do you want :10
100

*/
