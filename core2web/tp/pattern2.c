/*
 - - - *
 - - * *
 - * * *
 * * * *
 *
 */
 

#include<stdio.h>
	void main(){
   		for(int i=1;i<=4;i++){
			for(int sp=i;sp<4;sp++){
				printf("- ");
			}
			for(int j=1;j<=i;j++){
				printf("* ");
			}
			printf("\n");
		}
	}
