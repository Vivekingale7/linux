


#include<stdio.h>
void main(){
	int size;
	int arr[size],store=1;
	printf("enter size of array\n");
	scanf("%d",&size);
	printf("enter elements of array\n");
		for(int i=0;i<size;i++){
			scanf("%d",&arr[i]);
		}
	for(int i=1;i<=size;i++){
		if(i%2==0){
			store=i*i;
		}
		else{
			store=i*i*i;
		}
	  arr[i]=store;
	}
	for(int i=1;i<=size;i++){
	printf("%d ",arr[i]);
	}
}

			

