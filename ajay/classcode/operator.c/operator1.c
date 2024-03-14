#include<stdio.h>
 void main(){
	 int x=120;
	

	if (x%2==0 && x%4==0 && x%6==0 && x%8==0){

	 printf("120 divisible by 2,4,6,8\n");
	}
	if (x%5==0 || x%10==0 || x%12==0 || x%14==0){
		printf("120 is divisible by 5,10,12,14\n");
	}
 }
