/*
1 2 3 4
a b c d
5 6 7 8
e f g h
 */

#include<stdio.h>
	void main(){
		int rows;

		printf("enter rows:\n");
		scanf("%d",&rows);
		int x=1;
		char ch=97;
	

		for (int i=1;i<=rows;i++){
			for(int j=1;j<=rows;j++){

				if(i%2==1){
				printf("%d\t",x);
				x+=1;
				}else{
					printf("%c\t",ch);
					ch++;
				}
			}
			
			printf("\n");
		}
	}
