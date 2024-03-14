#include<stdio.h>
	void main(){
		int x;
		int count=0;
		printf("enter the number\n");
		scanf("%d",&x);
		for (int i=2;i<=x;i++){
			if(x/i==1){
				printf("%d is a prime number",x);
			}
		}
	}
