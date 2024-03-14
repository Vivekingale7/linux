#include<stdio.h>
 	int a=10;
  	int b;
	int *iptr=0; 
       void fun(){
       int x=30;
	printf("%d\n",a);       //10
	printf("%d\n",b);       //
	printf("%d\n",*iptr); 	//segmentation fault      
	printf("%p\n",iptr);    // nil  
	
	iptr=&x;
	printf("%d\n",*iptr);
	printf("%p\n",iptr);
       }
	void main(){

		int y=40;

		printf("%d\n",a);
		printf("%d\n",b);
		fun();
		//dingling pointer
		printf("%d\n",*iptr);
	}


