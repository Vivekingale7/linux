/*write a program to check the number is odd or even.take all the value from the user
input: var=10;
output:10 is an even no
input:var=31;
output:37 is an odd no
*/


#include<stdio.h>
void main(){
	int var;

	printf("var=\n");
	scanf("%d",&var);


	if(var%2==0 ){
		printf("%d is an even no\n",var );
	}
	else if(var%2==1){
		printf("%d is an odd no",var);
	}
	else {
		printf("%d is 0",var );
	}
}
