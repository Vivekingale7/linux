/*write a program ton print addition of 1 to 10 with 10 to 1
output:
1+10=11
2+9=11
3+8=11
.
.
10+1=11
*/


#include<stdio.h>
	void main(){
		int i=1,j=10,sum=i+j;
		for(int i=1;i<=10;i++){
		printf("%d +%d=%d\n",i,j,sum);
		sum=i+j;
		j--;
		}

 
}

