#include<stdio.h>
        void main(){
                int x=10;
		//wild pointer

	int *iptr;

		printf("%d\n",*iptr);

		//Segmentation fault (core dumped)
	}
