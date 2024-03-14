/*4.WAPto compare two arrays by with length and elements given by
user if array are equal then print “Equal” otherwise print “Not
Equal”
*/

#include<stdio.h>
	void main(){
		int size1;
		printf("Enter the size array1:");
		scanf("%d",&size1);

		int size2;
		printf("Enter the size array1:");
		scanf("%d",&size2);

		int arr1[size1],arr2[size2];
		printf("Enter the element of array1:");

		for(int i=0;i<size1;i++){
			scanf("%d",&arr1[i]);
		}

		printf("Enter the element of array2:");

		for(int i=0;i<size2;i++){
			scanf("%d",&arr2[i]);
		}
		int flag=0;

		for(int i=0;i<size2;i++){
			if(arr1[i]==arr2[i]){
				flag++;
			}else{
				i=size1+1;
			}
		}
		if(flag==size1){
			printf("Array are equal");
		}else{

			printf("Array are not equal");
		}

	}



