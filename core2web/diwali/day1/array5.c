/*
5.WAP to take 1-D array from user and print the second largest
element of the array.*/

#include<stdio.h>
	void main(){
		int size;
		printf("Enter the size of 1D array:\n");
		scanf("%d",&size);
		
		printf("Enter the element:\n");

		int arr[size];

		for(int i=0;i<size;i++){
			scanf("%d",&arr[i]);
		}
	
		for(int i=0;i<size;i++){
			printf("%d",arr[i]);
		}
		
		for(int i=0;i<size;i++){

			if(arr[i]<arr[i]+1){

			}
		}
				printf("The second largest element is %d",arr[i]+1);
	}
