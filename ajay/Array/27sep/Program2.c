#include<stdio.h>

void main(){

	// Homogenous type data
	
	int arr[4]={1,2,3,4};

	for(int i=0;i<4;i++){
	
		printf("%d ",arr[i]);
	}
	
	for(int i=0;i<4;i++){
	
		printf("%p\n",&arr[i]);
	}

	printf("%p\n",&arr);              //100
	printf("%ld\n",sizeof(&arr));    //8
	printf("%ld\n",sizeof(arr));     //16
	printf("%ld\n",sizeof(&arr[0]));   //8
	printf("%p\n",&arr[2]);          // 108


}

/*
Ouptut: 

1 2 3 4 
0x7ffdc8c339e0
0x7ffdc8c339e4
0x7ffdc8c339e8
0x7ffdc8c339ec
0x7ffdc8c339e0
8
16
8
*/
