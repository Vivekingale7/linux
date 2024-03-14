/* 1
   0 1
   0 1 0
   1 0 1 0
   1 0 1 0 1

*/


#include<stdio.h>

void main(){

int x=1,n;

printf("Enter Size\n");
scanf("%d",&n);

for(int i=1;i<=n;i++){

    for(int j=1;j<=i;j++){
    
      if(x%2==0){
      
	 printf(" 0 ");
	
	  x++;
      }else{
      
	  printf(" 1 ");
	  x++;
      }
    }
       printf("\n");
}
}

