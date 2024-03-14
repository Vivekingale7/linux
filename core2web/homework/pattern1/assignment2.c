/* if possible take no of rows from the user 
 

 1 2 3 
 a b c
 1 2 3 
 a b c
 
 
 */



#include<stdio.h>
	void main(){
		for (int i=1;i<=4;i++){
			char ch='a';
                	int x=1;
			for(int j=1;j<=3;j++){

				if(i%2==0){
				printf("%c ",ch++);
			
				} else{
					printf("%d ",x++);
					}
				
			}printf(" \n");
		}
	}

