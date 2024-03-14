/*
WAP to find the given element from the array
Take array size and array elements from the user
IP : enter array : 10 12 13 15 16 14
Ip : enter element : 15
Op: 15 is presen

*/

#include<stdio.h>
	void main(){

		int size,flag=0;
		printf("Enter the size:\n");
		scanf("%d",&size);

		int arr[size];
		
		for(int i=0;i<size;i++){

			scanf(" %d",&arr[i]);
		}
		int search;
		printf("Enter the element:\n");
		scanf(" %d",&search);

		for(int i=0;i<size;i++){
			if(search==arr[i]){
				flag=1;
			}
		}
		if(flag==1){
			printf("%d is a present",search);
		}else{
			printf("%d is not present",search);
	}
}	
