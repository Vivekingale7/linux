#include<stdio.h>
	void main(){
		int arr1[3];
		printf("%d\n",sizeof(arr1));  //12

		int arr2[4];
		printf("%d\n",sizeof(arr2));  //16
		
		int arr3[0];
		printf("%d\n",sizeof(arr3)); //0
	}
