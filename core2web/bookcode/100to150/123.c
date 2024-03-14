#include<stdio.h>
	void main(){
		int arr1[]={1,2,3,4,5,6,7,8,9};
		int arr2[3][3]={1,2,3,4,5,6,7,8,9};
	for(int i=0;i<3;i++){
		for (int j=0;j<3;j++){	
		printf("%d  ",arr2[i][j]);
	}
		printf("\n");
	}
	printf("\n");
	int arr3[2][3]={1,2,3,4};
	for(int i=0;i<2;i++){
		for (int j=0;j<3;j++){	
		printf("%d  ",arr3[i][j]);
	}
		printf("\n");
	}
	printf("\n");
	int arr4[][3]={1,2,3,4,5,6,7,8,9};

	for(int i=0;i<3;i++){
		for (int j=0;j<3;j++){	
		printf("%d  ",arr2[i][j]);
	}
		printf("\n");
	}

	printf("\n");
	int arr5[][3]={{1,2,3},{4,5},{6}};
	for(int i=0;i<3;i++){
		for (int j=0;j<3;j++){	
		printf("%d  ",arr2[i][j]);
	}
		printf("\n");
	}
}
