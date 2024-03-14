#include<stdio.h>
	void main(){
		int x=10;
		int *iptr1=&x;
		int *iptr2=iptr1;
		int **iptr3=&iptr1;

		printf("%d\n",x);			//10
		printf("%d\n",*iptr1);			//10
		printf("%d\n",*iptr2);			//10
		printf("%d\n",**iptr3);			//10

	}


