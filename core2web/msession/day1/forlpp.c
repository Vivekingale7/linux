//WAP to print the square of odd no between given range from user 

#include<stdio.h>
	void main(){
		int start,end;

		printf("enter start:\n");
		scanf("%d",&start);
		
		printf("enter end:\n");
		scanf("%d",&end);

		for (int i=start;i<=end;i++){
			if(i%2==1)
				printf("%d ",i*i);
		}
	}
