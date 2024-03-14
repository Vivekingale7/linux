#include<stdio.h>
	void main(){
		int startno,endno;
		
		printf("enter the starting no:");
		scanf("%d",&startno);

		printf("enter the ending no:");
		scanf("%d",&endno);

		for(int i =startno; i>=endno;i++){
		       if(i%2==0){
				printf("%d",i);
					i--;
			}

		}{printf("\n");
		}for(int i=endno; i>=startno;i--){
		       if(i%2==1){
				printf("%d",i);
				i++;
		       }
		}
	}
				

