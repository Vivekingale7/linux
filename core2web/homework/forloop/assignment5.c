//WAP to take the number input and print all the factor of that number

#include<stdio.h>
	void main(){
		int x;
		printf("enter the number:");
		scanf("%d",&x);

		for(int i=x;i>=1;i--){
			if(x%i==0){
			printf("%d ",i);
		}
	}
	}




