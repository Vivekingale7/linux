#include<stdio.h>

void main(){

	int x;

	printf("Enter Size: ");
	scanf("%d",&x);

	if(x>18){
	
		printf("Eligible for voating.\n");
	}else{
	
		printf("Not Eligible for voating:\n");
	}
}
