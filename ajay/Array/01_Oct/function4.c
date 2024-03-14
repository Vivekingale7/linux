// ptr increment 

#include<stdio.h>

void sub(float a,float b){

	printf("3 = %f\n",a-b);
	printf("4= %f\n",a-b);
}
void add(int a,int b){

	printf("1 = %d\n",a+b);
	printf("2= %d\n",a+b);

	void (*ptr)(float,float);

	ptr=sub;
	
	printf("3.%p\n",ptr);                      
	ptr(30,20);
	ptr++;
      	
	printf("4.%p\n",ptr);                  // address change
	ptr(50,20);
	ptr++;                              // only two time increment...
	printf("5.%p\n",ptr);
	
	ptr(50,40);
	
}
void main(){
	
	void (*ptr)(int,int);

	ptr=add;
	printf("%p\n",ptr);                      
	ptr(30,20);
	ptr++;
  
      	printf("%p\n",ptr);                  // address change
	ptr(50,20);
	ptr++;                              // only two time increment...
	printf("%p\n",ptr);	
	ptr(50,40);
}
/*
output: 

0x55994ff79149
1 = 50
2= 50
0x55994ff7914a
1 = 70
2= 70
0x55994ff7914b
Illegal instruction (core dumped)
*/
