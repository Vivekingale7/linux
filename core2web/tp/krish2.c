#include<stdio.h>

void main(){

	int x = 325867411,sum=0,count=0,total=0;

	while(x!=0){
		sum=x%10;
		for(int i=1; i<=sum; i++){
				if(sum%i==0){
					count++;
				}
				if(count==2){
					printf("%d ",sum);
					total++;
				}
				count=0;
			}
		x=x/10;
	}
	printf("\n");
	printf("the total prime numbers is %d\n",total);
}
