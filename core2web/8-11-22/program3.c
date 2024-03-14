/*
 WAP that accept the number from user seperate the digits from that

 */


#include<stdio.h>

void main(){

	int num;
	int temp=num;
	int count=0;
	while(temp!=0){
		temp/=10;
		count++;
	}
	int arr[count];
	temp=num;
	int i=0;
	while(temp!=0){
		temp/=10;
		arr[i]=temp;
	}

}
