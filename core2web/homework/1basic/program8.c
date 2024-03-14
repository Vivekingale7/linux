/*
8. Write a program to print a table of 11 in reverse order
*/

#include<stdio.h>

void main(){

	int size;

	printf("which table do you want in revrse :");
	scanf("%d",&size);

	for(int i = 10; i>=1; i--){
		printf("%d\n",size*i);
	}
}
/*
OUTPUT :
which table do you want in revrse :11
110
99
88
77
66
55
44
33
22
11

*/
