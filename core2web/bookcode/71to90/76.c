#include<stdio.h>
	void main(){
		for (int i=1;i<=4;i++){
			int x=1;
			char ch='A';
			for(int j=4;j>=i;j--){
				if(j%2==1){
					printf("%c ",ch++);
				}else{
				printf("%d ",x);
				x++;
				}
			}
			printf("\n");
		}
	}
