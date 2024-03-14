// ptr increment 

#include<stdio.h>

void add(int a,int b){

	printf("1 = %d\n",a+b);
	printf("2= %d\n",a+b);
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
