/*
6. take no of rows from the user
D e F g
edF
FcHe
gBiD
*/



#include<stdio.h>
        void main(){

                int rows;
                printf("Enter the rows:");
                scanf("%d",&rows);

                for(int i=1;i<=rows;i++){

                        for(int j=rows;j>=1;j--){

                        if(i%2==1){
				 if(j%2==0){
					printf("%c\t",65+rows-j+i+2);
				
				}else{
					printf("%c\t",97+rows-j+i+2);
				
			}
				
			}else if(i%2==0){
				
                                if(j%2==1){
					printf("%c\t",65-rows+j+i+2);
			
				}else{
					printf("%c\t",97-rows+j+i+2);
				
				}
				}
			}		
			
			printf("\n");
        }
	}
