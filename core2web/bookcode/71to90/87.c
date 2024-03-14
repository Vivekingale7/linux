#include<stdio.h>
	void main(){
		int size;
		printf("Enter the size:\n");
		scanf("%d",&size);
		
		int arr[size];
		printf("Enter the element:\n" );

		for(int i=0;i<size;i++){
			scanf("%d ",&arr[i]);
		}
		int search;
		printf("Enter search element:\n");
		scanf("%d ",&search);

		for(int i=0;i<size;i++){
			if(search==arr[i]){
				printf("Element found\n");
			}else{
				printf("Element not found\n");
			}
		}
	}

