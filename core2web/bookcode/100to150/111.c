#include<stdio.h>
	void main(){

		int arr[]={10,20,30,40};
		int *ptr=&(arr[0]);
		
		printf("%p\n",ptr);		//100
		printf("%d\n",*ptr++);		
		
		printf("%d\n",*(ptr++));		
		printf("%d\n",(*ptr++));		
		
		printf("%p\n",*ptr);		
		
		printf("%d\n",(*ptr)++);		
		printf("%d\n",(*ptr)++);		
	
	}

/*
 0x7ffc3576b0a0
10
20
30
0x28
40
41
*/
