/*
 take value of rows from user 

D D D D
  C C C
    B B
      A

*/

#include<stdio.h>
	void main(){
		int rows;
		
		
		printf("Enter the rows:\n");
		scanf("%d",&rows);

		char ch=64+rows;
		for(int i=1;i<=rows;i++){
			for(int sp=1;sp<i;sp++){
				printf("\t");
			}
			
			for(int j=rows;j>=i;j--){
				
				if(i%2==1){
				printf("%c\t",ch);
				}else{
					printf("%c\t",ch+32);
				}  
			}
			ch--;
			printf("\n");
	}
}	
