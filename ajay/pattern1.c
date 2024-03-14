#include<stdio.h>
	void main(){
		int rows;
		printf("Enter the rows:\n");
		scanf("%d",&rows);

		for (int i=1;i<=rows;i++){
			for(int sp=1;sp<=rows-i;sp++){
				printf("_\t");
			}
			int ch=64+rows;
			int x=1;
			for(int j=1;j<=i;j++){
			if(x%2==1){
				printf("%c\t",ch);
			
			}else{
				printf("%c\t",ch+32);
				
			}
			ch--;
			x++;
			}
				printf("\n");
			}
	}
