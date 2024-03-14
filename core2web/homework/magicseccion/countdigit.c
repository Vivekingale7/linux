/* WAP to count digit inn given number
 input=94211
 output= digit count is 5

 */


#include<stdio.h>
	void main(){

		int input,rem,count=0;

		printf("enter the input:");
		scanf("%d",&input);

		while(input!=0){
			rem=input%10;
			input=input/10;
		
		count++;
		}
		printf("digit of count is %d",count);
	
	}
