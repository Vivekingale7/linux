//print value in range 1-5 using switch case

#include<stdio.h>
void main(){
   int x;
   printf("enter the number:");
   scanf("%d",&x);

   switch(x){
	case 1:
               printf("one\n");
	 break;

	case 2:
               printf("two\n");
	 break;

	case 3:
               printf("three\n");
	 break;

	case 4:
               printf("four\n");
	 break;
              
	case 5:
               printf("five\n");
	 break;

	default:
	printf("weong input");
   }
}
