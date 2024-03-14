/*take no of rows from the user.

1    2    3     4
25   36   49    64
9    10   11    12
169 196  225   269

*/

#include<stdio.h>

void main(){

	int rows,cols;


	printf("Enter the rows: ");
	scanf("%d",&rows);
	
	printf("Enter the cols: ");
	scanf("%d",&cols);
        
	int x=1,y;

	for(int i=1;i<=rows;i++){
                
		for(int j=1;j<=cols;j++){
			
			if(i%2==1){
			
				printf("%2d  ",x);
			        x++;
			}else{	
		                y=x*x;
				printf("%2d  ",y);
				
				x++;
			}
			
		}

		printf("\n");
}
}
		
		
		
		
		









