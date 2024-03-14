// wap take two character if these character are equal than print  the same but  if they are unequal then print their diff


#include<stdio.h>
	void main(){
		char chr1,chr2;
		printf("Enter the two character :\n");
		scanf("%c %c",&chr1 ,&chr2);
              

	if(((chr1>=65 && chr1<=90) ||( chr1>=97 && chr1<=122)) || ((chr2>=65 && chr2<=90) ||( chr2>=97 && chr2<=122))){

		if(chr1==chr2){
			printf("%c and %c characters are same",chr1,chr2);
		}else if(chr1>chr2){
 
			printf("difference between the character is %d",chr1-chr2);
		}else if(chr1<chr2){
		
			printf("difference between the character is %d",chr2-chr1);

		}
	}else{
		
			printf("This charcter is not Available");
		}	
	
	
	}
