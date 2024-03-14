/* WAP to print the character whose ASCII is even*/

#include<stdio.h>
	void main(){
		    int ch;
 		printf("enter the ascii value: ");
		scanf("%d",&ch);
		
		if((ch>=65 && ch<=90) || (ch>=97 && ch<=122)){
	
		if(ch%2==0){
			printf("%d is ascii value of %c",ch,ch);
	          }else{
			  printf("%d is not even number",ch);
		  }
	}else{
		printf("wrong input");
	}
	}
