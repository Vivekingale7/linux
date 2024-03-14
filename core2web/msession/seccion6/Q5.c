/*
 take value of rows from user 

a  B  c  D
   e  F  G
      h  I
         J

*/

#include<stdio.h>
	void main(){
		int rows;
		
		printf("Enter the rows:\n");
		scanf("%d",&rows);

		char ch=97,cp=65;

		for(int i=1;i<=rows;i++){
			for(int sp=1;sp<i;sp++){
				printf("\t");
			}
			
			for(int j=rows;j>=i;j--){

			if((i+j)%2==1){
				printf("%c\t",ch);

			}else{
				printf("%c\t",cp);
			
			}
			ch++;
                        cp++;

			}
		
			printf("\n");
		}
	}
