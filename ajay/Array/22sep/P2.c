#include<stdio.h>

void main(){

	int arr1[]={10,20};
	int arr2[]={40,50,60};
	int arr3[]={50,80,90};

	int (*ptr1)[]=&arr1;
	int (*ptr2)[]=&arr2;

	int (**ptr3[3])[3]={&ptr1,&ptr2,&ptr3};
//	int (*ptr4[2])[3]={ptr1,ptr2};
	
	printf("%d\n",*(*(**ptr3)));
	for(int i=0;i<2;i++){

		for(int j=0;j<3;j++){

			printf("%d ",*(*(**ptr3 + i)+ j));
		}
		printf("\n");
	}
	
	//int (*ptr5[2])[3]={&arr1,&arr2};
	

}
