#include<stdio.h>

void main(){

	int arr1[3];

	arr1[0]=10;
	arr1[1]=20;
	arr1[2]=30;

	for(int i=1;i<3;i++){
	
		printf("%d\n",arr1[i]);
	}

	int arr2[3];

	arr2=arr1;

	for(int i=1;i<3;i++){
	
		printf("%d\n",arr2[i]);
	}
	
}

/*
Error: Program3.c: In function ‘main’:
Program3.c:18:13: error: assignment to expression with array type
   18 |         arr2=arr1;
      |             ^

 */ 
