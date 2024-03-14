//WAP to find the sum of numbers that are divisible by 5in the given range

#include<stdio.h>
	void main(){
		int x,y,count=0,sum=0;
		printf("enter the starting number: ");
		scanf("%d",&x);
		printf("enter the ending number:");
		scanf("%d",&y);
		for (int i=x;i<=y;i++){
			if(i%5==0){
				printf("%d\n ",i);
			sum=sum+i;
			count++;
		}
		}
		printf("sum is %d\n",sum );
		printf("count is %d\n",count);
	}
