#include<stdio.h>
	void main(){
		 int arr[2][3]={};
		 printf("Enter the element:\n");
		 
		 for(int row=0;row<2;row++){
			 for(int column=0;column<3;column++){
				 scanf("%d", &arr[row][column]);
			 }
		 }
		 for(int row=0;row<2;row++){
			 for(int column=0;column<3;column++){
				 scanf("%d", &arr[row][column]);
			 }
			 printf("\n");
		 }

		 for(int i=0;i<6;i++){
			 printf("%ls\n",arr[i]);
		 }
	}
