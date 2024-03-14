//wap a program to see a given number is multiple of 3//

#include<stdio.h>
	void main(){
		int x,start, end;
		printf("enter the number:\n");
		scanf("%d",&start);

		printf("enter the number:\n");
		scanf("%d",&end);
		 for (int i=start;i<=end;i++){
		if (i%3==0){
			printf("%d ",i);
		}
	}
	}
