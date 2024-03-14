#include<stdio.h>
void main(){
	int var;

	printf("var=");
	scanf("%d",&var);


	if(var>0){
		printf("%d is a positive number\n",var );
	}
	else{
		printf("%d is a negative number",var);
	}


}
