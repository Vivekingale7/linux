#include<stdio.h>

void main(){

	int arr[]={1,2,3,4,5};

	int *iptr=&(arr[0]);  
	
	printf("%d\n",*(iptr++)); //1
 
         printf("%d\n",++(*iptr)); //3 
	
	printf("%d\n",(*iptr++));  //3

	printf("%d\n",(*iptr++)); //
	printf("%d\n",(*iptr++)); 
	printf("%d\n",(*iptr++)); 

	

}
