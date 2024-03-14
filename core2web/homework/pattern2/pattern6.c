/*take no of rows from the user.
  =  =  =  =
  $  $  $  $
  =  =  =  =
  $  $  $  $

*/

#include<stdio.h>

void main(){

	int rows,cols;


	printf("Enter the rows: ");
	scanf("%d",&rows);
	
	printf("Enter the cols: ");
	scanf("%d",&cols);
        
	for(int i=1;i<=rows;i++){
                
		for(int j=1;j<=cols;j++){
			
			if(i%2==1){
			
				printf(" = " );
				
			}else{	
		
				printf(" $ ");
			}
		}

		printf("\n");
}
}
		
		
		
		
		









