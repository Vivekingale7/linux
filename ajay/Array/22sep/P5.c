#include<stdio.h>

void main(){

	int rows=4;

	for(int i=1;i<=rows*rows;i++){
	
		printf("%d\t",i);

		if(i%rows==0){
		
			printf("\n");
		}
	}
}
