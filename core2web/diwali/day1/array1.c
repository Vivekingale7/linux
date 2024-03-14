/*WAP to create 1-D array of length n from user and also take value
from user and print whole 1-D array

*/

#include<stdio.h>
	void main(){

		int size;
		printf("Enter the size of the array:");
		scanf("%d",&size);
		
		printf("\n");
		printf("enter the element:\n");
		int arr1[size];

		for(int i=0;i<=size;i++){
			scanf("%d",&arr1[i]);
		}

		for(int i=0;i<size;i++){
			printf("%d",arr1[i]);
		}
	}
