#include<stdio.h>
	void main(){
		int arr1[3]={1,2,3};
		int arr2[3]={1,2,3};
	if(arr1==arr2){
		printf("Array are equal\n");
	}else{
		printf("Array are not equal\n" );
	}

	int flag=0;
	for(int i=0;i<3;i++){

		if(arr1[i]==arr2[i]){
				flag=1;
			}else{
				flag=0;
			}
	}	
		if(flag==1){
		printf("Array are equal\n");
		}else{
		printf("Array are not equal\n");
	
	}
	
	}
