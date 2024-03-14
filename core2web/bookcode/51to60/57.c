//give input from user and create table using for while loop

#include<stdio.h>
	void main(){
		int x;
		printf("enter the no:");
		scanf("%d",&x);

		int i=1;
		while(i<=10){
		printf("%d\n",x*i);
		i++;
		}
	}

