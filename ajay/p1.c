#include<stdio.h>
	
void main(){
	long int x=2;
	for(int i=1;i<=4;i++){
		for(int j=1;j<=i;j++){
			printf("%ld\t",x++);
		}
		printf("\n");
		x--;
	}
}
