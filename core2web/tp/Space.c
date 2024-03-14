#include<stdio.h>
   
void main(){
	
     	int x=9;	   
	for(int i=1;i<=4;i++){`

		for(int sp=3;sp>=i;sp--){

			printf( " _ ");
		}
			for(int j=1;j<=i;j++){
			   
				printf("% 10d ",x);
				x--;
				
			}
		
		   printf("\n");
	   }
}

