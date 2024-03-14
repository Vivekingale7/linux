/*
 
16  15  14  13
L   K   J    I
8   7   6    5
D   C   B    A




*/

#include<stdio.h>
        void main(){
              
	int rows,cols;
	
	printf("Enter the rows: ");
	scanf("%d",&rows);
	
	printf("Enter the cols: ");
	scanf("%d",&cols);
        
	char ch=64+(rows*cols);
        int x=rows*cols;

	for(int i=1;i<=rows;i++){
                
		for(int j=1;j<=cols;j++){
			
			if(i%2==1){
			
				printf("%d\t ",x);
				
			}else{	
		
				printf("%c\t ",ch);
			}
		
			ch--;
			x--;
		}
			printf("\n");
		
	}

	}
