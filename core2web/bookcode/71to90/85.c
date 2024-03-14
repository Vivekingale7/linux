#include<stdio.h>
	void main(){
		int iarr[5];
		printf("Enter array element:\n");
		for(int i=0;i<5;i++){
			scanf("%d",&iarr[i]);
		for(int i=0;i<5;i++){
			if(i%2==0){
				printf("%d\n",iarr[i]);
			}
		}
		}
	}
