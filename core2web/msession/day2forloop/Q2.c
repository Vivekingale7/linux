/* to find the input is that special character, digit or alphabet
 */

#include<stdio.h>
	void main(){

		int input;
		printf("Enter the input character:\n");
		scanf("%d",&input);

		
		if(input>=65 && input<=90 || input>=97 && input<=122){
			printf("%c is the alphabet",input);

		}else if(input<=48 && input>=57){
			printf("%d The input is digit",input);
		}else{
			printf("%c the input is special charcter",input);
		}
	}
