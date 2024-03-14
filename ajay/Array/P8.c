#include<stdio.h>

void main(){


	int x=10;

	int *iptr=&x;

        void *vptr=&x;

	//printf("%d\n",vptr); //200
	printf("%p\n",iptr); //garbag
	/*printf("%p\n",*iptr); //0xa
	printf("%d\n",*iptr); //10
*/
	printf("%p\n",vptr); 
	printf("%d\n",*(int*)vptr); 
	printf("%ld\n",sizeof(vptr)); 
	printf("%d\n",*iptr);
}
