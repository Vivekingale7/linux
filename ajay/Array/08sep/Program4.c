//Program 4


#include<stdio.h>

void main() {

	int len;
	printf("Enter the length of array : ");
	scanf("%d",&len);
	int arr[len];

	for(int i = 0;i < len;i++){
		scanf("%d",&arr[i]);
	}
	for(int i = 0 ;i < len;i++){
		if(arr[i] % 2 == 0){
			printf("%d ",arr[i] * arr[i]);
		}
		else{
			printf("%d ",arr[i] * arr[i] * arr[i]);
		}
	}
}
