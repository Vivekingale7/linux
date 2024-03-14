#include<stdio.h>
   
void main(){
	
     	int x=10;	   
	for(int i=1;i<=4;i++){

		for(int sp=3;sp>=i;sp--){

			printf("  ");
		}
			for(int j=1;j<=i;j++){
			   
				printf("%d ",x);
				x++;
				
			}
			x=x-2;
		
		   printf("\n");
		  
	   }
}

