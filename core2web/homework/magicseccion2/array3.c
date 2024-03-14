/*
WAP to add two different arrays of the same size
Take array size and array elements from the user
IP : enter 1st array : 10 12 13 15
Ip : enter 2nd array: 1 2 3 4
Op: 11 14 16 19

*/

#include<stdio.h>

	void main(){

                int size;
                printf("Enter the size:\n");
                scanf("%d",&size);

                int arr1[size];
		printf("Enter the first array element:\n");
                for(int i=0;i<size;i++){
			scanf("%d",&arr1[i]);
		}
                int arr2[size];
		printf("Enter the second array element:\n");
                for(int i=0;i<size;i++){
			scanf("%d",&arr2[i]);
		}
		printf("Addition of the array\n");
                for(int i=0;i<size;i++){
			printf("%d\n",(arr1[i]+arr2[i]));
		}
	}
