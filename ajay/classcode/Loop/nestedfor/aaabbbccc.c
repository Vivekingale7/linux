#include<stdio.h>
void main() {
  char ch='65';
	for(int i=1;i<=3;i++){
	char ch='A';
		for(int j=1; j<=3;j++){
			printf(" %c ",ch++);
		}
	   printf("\n");
	   ch++;
	}
}
