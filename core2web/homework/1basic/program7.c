/*
7. Write a program to print a table of 12
*/

#include<stdio.h>

void main(){

	int size;

	printf("which table do you want :");
	scanf("%d",&size);

	for(int i = 1; i<=10; i++){
		printf("%d\n",size*i);
	}
}
/*
OUTPUT :
which table do you want :12
12
24
36
48
60
72
84
96
108
120

*/
