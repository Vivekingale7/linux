/*
4. Write a program to print even numbers 1-100
*/

#include<stdio.h>

void main(){

	int start;
	int end;

	printf("how many evan number you want\n");

	printf("enter starting number :");
	scanf("%d",&start);

	printf("enter ending number :");
	scanf("%d",&end);

	if(start<=end){
		for(int i = start; i<=end; i++){
			if(i%2==0){
				printf("%d\n",i);
				i=i+1;
			}
		}
	}
	else{
		printf("enter the vlid number\n");
	}
}
/*
OUTPUT :
how many evan number you want
enter starting number :1
enter ending number :100
2
4
6
8
10
12
14
16
18
20
22
24
26
28
30
32
34
36
38
40
42
44
46
48
50
52
54
56
58
60
62
64
66
68
70
72
74
76
78
80
82
84
86
88
90
92
94
96
98
100

*/
