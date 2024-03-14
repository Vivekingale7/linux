/*WAP to take numerical input from the user and find whether the number is divisible by 5 and 11. take all the value from the user
input:55
output:55 is divisible by 5 & 11*/

#include<stdio.h>
void main(){
	int x;

	printf("enter the input x:\n");
	scanf("%d",&x);


	if(x%5==0 && x%11==0 ){
		printf("%d is divisible by 5 & 11\n",x );
	}
	else{
		printf("%d is  not divisible by 5 & 11",x);
	}


}
