//take a two input from user which is divisible by 4 &5 using while loop

#include<stdio.h>
  void main(){
	int startno,endno;
	printf("enter the starting no:\n");
	scanf("%d",&startno);

	printf("enter the ending no:\n");
	scanf("%d",&endno);

	int i=startno;
	while(i<=endno){
		if(i%4==0 && i%5==0){
			printf("%d is a divisible by 4 and 5\n",i);
		}i++;
	}
  }
   


 
