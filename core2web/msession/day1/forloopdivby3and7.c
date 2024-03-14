#include<stdio.h>
	void main(){
		int start,end;

		printf("enter start:\n");
		scanf("%d",&start);
		
		printf("enter end:\n");
		scanf("%d",&end);

		for (int i=start;i<=end;i++){
			if(i%3==0 && i%7==0){
				printf("%d\n",i);
			}
		}
	}
