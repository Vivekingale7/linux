/* WAP to print all even in reverse order and odd number in standard way . both seperately within way.*/

#include<stdio.h>
	void main(){
		int start,end;
		printf("enter the starting number:");
		scanf("%d",&start);
		printf("enter the ending value:");
		scanf("%d",&end);
	
		if(x%2==0){
			for(int i=start;i<=end;i--){
				printf("%d \n",i);
			}
		}else if(x%2==1){
			for (int i=start;i>=end;i){
				printf("%d\n",i);
			}
	}else{
		printf("wrong input");
	}
	}
