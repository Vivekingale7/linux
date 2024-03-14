//WAP to calculate the square root of number ranging from 100 to 300

#include<stdio.h>
	void main(){
		int x,y,squareroot;

		printf("enter the number:\n");
		scanf("%d",&x);

		printf("enter the number:\n");
		scanf("%d",&y);

		for (int i=x;i<=y;i++){
			for (int j=1;j<y;j++){

				if(j*j==i){

			        printf("%d of square root is %d\n",i,j);
				}
			}
			}		
		printf(" \n");
	
	
	}	
