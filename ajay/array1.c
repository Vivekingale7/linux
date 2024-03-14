#include<stdio.h>
	void main(){
		
		int end,search,flag=0;
		
		 printf("Enter the size of array:\n");
                scanf("%d",&end);
		
		printf("enter the element:\n");	
		int arr[end];
		for(int i=0;i<end;i++){
			scanf("%d",&arr[i]);
		}
		
		printf("Enter the searching number:\n");
		scanf("%d",&search);
		
		for(int i=0;i<end;i++){

			if(arr[i]==search){
			
			
			printf("%d is present in %d number",search,i);
		}
		}
	}
	
