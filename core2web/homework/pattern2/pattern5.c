/*take no of rows from the user.

D C B A
e d c b
F E D C
g f e d
*/

#include<stdio.h>

void main(){

	int rows,cols;
	char ch='D';


	printf("Enter the rows: ");
	scanf("%d",&rows);
	
	printf("Enter the cols: ");
	scanf("%d",&cols);
        
	for(int i=1;i<=rows;i++){
                
		for(int j=1;j<=cols;j++){
			
			if(i%2==1){
			
				printf("%c ",ch);
				
			}else{	
		
				printf("%c ",ch+31);
			}
			ch--;
		}

		printf("\n");
		ch=ch+5;
		
		
		
		
		
	}

}






