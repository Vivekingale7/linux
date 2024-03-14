/*
 take no of rows from user

 =  =  =  =  =  =
 $  $  $  $  $  $
 @  @  @  @  @  @
 =  =  =  =  =  =
 $  $  $  $  $  $
 @  @  @  @  @  @
*/
#include<stdio.h>
 void main(){

	int rows,column,x;
	char ch='=';

	printf("Enter the rows: ");
	scanf("%d",&rows);

	printf("Enter the column: ");
	scanf("%d",&column);
	for(int i=1;i<=rows;i++){
		    for(int j=1;j<=column;j++){
				    
				     printf("%c\t",ch);
		    }
			if(ch=='='){
				ch='$';
			}else if(ch=='$'){
				ch='@';
			}else if(ch=='@'){
				ch='=';
			}
		    
		    printf("\n");

	}
}
 
