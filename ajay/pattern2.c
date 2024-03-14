#include<stdio.h>
	void main(){
		
		int end,sum=0;
		
		printf("Enter the number:\n");
	        scanf("%d",&end);
		
		printf("enter the element:\n");	
		int arr[end];
		for(int i=0;i<end;i++){
			scanf("%d",&arr[i]);
		}
		for(int i=0;i<end;i++){
			sum=sum+arr[i];	
		}
		printf("the sum of number is %d",sum);
	}
