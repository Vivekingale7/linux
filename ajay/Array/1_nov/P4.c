#include<stdio.h>
#include<stdlib.h>

void main(){

	int *ptr1=(int*)calloc(6,sizeof(int));

	for(int i=0;i<5;i++){
	
		*(ptr1+i)=10+i;
	}
	
	for(int i=0;i<5;i++){
	
		printf("%d\n",*(ptr1+i));
	}
	
	int *ptr2=(int*)realloc(ptr1,4);

	for(int i=0;i<4;i++){
	
		*(ptr2+i)=20+i;
	}
	
	for(int i=0;i<4;i++){
	
		printf("%d\n",*(ptr2+i));
	}
}
