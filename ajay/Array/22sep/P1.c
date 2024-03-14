#include<stdio.h>

void main(){

	int x=10;
	int y=20;

	int *iptr=&x;
	int *iptr1=&y;


	int **iptr2=&iptr;

	int *arr[]={&iptr,&iptr1};

	printf("%p\n",*(arr[0]));       // 200
	printf("%p\n",*(arr[1]));       //300
	printf("%p\n",*((arr[0])));    //address +seg
	printf("%p\n",*((arr[1])));    //address+seg
	printf("%d\n",*(arr[0]));       //
	printf("%d\n",*(arr[1]));
	printf("%d\n",*(*arr[0]));   // 10
	printf("%d\n",*(*arr[1]));   // 20

	/*

	printf("%d\n",iptr);  //gar
	printf("%d\n",*iptr); //10
	printf("%p\n",*iptr); //warning+0xa
	printf("%p\n",*iptr2); //
	printf("%d\n",*iptr2); / */
}
