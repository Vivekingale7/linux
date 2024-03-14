/*wrirte a program take a number and print whether it is less than 10 or greater than 10.take all the value from user
input: var=5
output:5 is less than 10
input:var=16
output:16 is greater than 10*/

#include<stdio.h>
void main(){
	int var;

	printf("var=");
	scanf("%d",&var);


	if(var>10){
		printf("%d is a greater than 10\n",var );
	}
	else{
		printf("%d is a less than 10\n",var);
	}


}
