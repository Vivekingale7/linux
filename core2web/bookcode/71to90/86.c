#include<stdio.h>
	void main(){
		int iarr[5];
		printf("Enter the element:\n");
		for(int i=0;i<5;i++){
			scanf("%d",&iarr[i]);
		}
		for(int i=0;i<5;i++){
			printf("%d ",iarr[i]);
		}
	}
