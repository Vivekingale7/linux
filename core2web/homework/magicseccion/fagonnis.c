#include<stdio.h>
	void main(){

		int a=0,b=1,c=0;

		for (int i=1;i<=4;i++){
			for(int j=1;j<=i;j++){
				a=b;
				b=c;
				c=a+b;
				printf("%d  ",c);
			}
			printf("\n");
		}
	}
