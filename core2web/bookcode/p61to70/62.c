#include<stdio.h>
	void main(){
		int i,j;
		for (i=1,j=10;i<=j;++i,--j){
			printf("%d\n",i);
			printf("%d\n",j);
		}
	}
/*
output:
1
10
2
9
3
8
4
7
5
6
*/

