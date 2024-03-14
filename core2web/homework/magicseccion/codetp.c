/*
 D  e  F  g
 e  D  c  B
 F  g  H  i
 g  F  e   D
 
 */

#include<stdio.h>
	void main(){
		
		int rows;
		printf("Enter the rows:");
		scanf("%d",&rows);
		
		
		for(int i=1;i<=rows;i++){
			
			for(int j=4;j>=rows;j--){
					
			if(i%2==0)
			{j%2==0?printf("%c",65+rows-j+i+2):printf("%c",97+rows-j+i+2);}
			
			if(i%2==1){j%2==0?printf("%c",97-rows+j+i+2):printf("%c",65-rows+j+i+2);
			}
			}
			printf("\n");
		}
	}
