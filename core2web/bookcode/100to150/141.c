#include<stdio.h>
	void main(){
		int arr[3][3]={10,20,30,40,50,60,70,80,90};
		

		printf("%p\n",&arr);		//100
		printf("%p\n",arr);		//in100

		printf("%p\n",arr[0]);		//inin100
		printf("%p\n",&arr[0]);		//in100
		printf("%p\n",&arr[0][0]);	//ininin100
		printf("%d\n",*(*(arr+1)+1));   //50
		printf("%d\n",*(*(arr+2)+1));	//80
	}

