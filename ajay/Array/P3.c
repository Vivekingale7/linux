#include<stdio.h>

void main(){

	int arr[5]={1,2,3,4,5};

	int x=3;
	int y=2;

	int *iptr=&x;

	 *iptr=&y;


	 printf("%p\n",&x);
	 printf("%p\n",&iptr);
	 printf("%p\n",&y);
	 printf("%p\n",&iptr);

	for(int i=0;i<5;i++){
	
		printf("%d\n",*(arr+i));
	}
}
