#include<stdio.h>
   
void main(){
	
     	int x=1,y=1;
	   
	for(int i=1;i<=4;i++){
	
     		for(int j=1;j<=i;j++){
			   
			if(x%2==1){
				
				printf("%d ",y);
				x++;
				y++;
			}else {
			
				printf("* ");
				x++;
				
			}
		   }
		   printf("\n");
	   }
   }
