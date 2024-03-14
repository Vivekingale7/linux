/*
 A  b  C  d
    e  G  i
       K  n
          Q

	  */



#include<stdio.h>

	void main(){
		int rows;
		printf("Enter the rows:\n");
		scanf("%d",&rows);

		char ch=65;

		for(int i=1;i<=rows;i++){
			for(int sp=1;sp<i;sp++){
				printf("\t");
			}
			for(int j=rows;j>=i;j--){

				if((i+j)%2==1){
					printf("%c\t",ch);
					ch=ch+i;
				}else{
					printf("%c\t",ch+32);
					ch=ch+i;
				}
			}
			printf("\n");
		}
	}
