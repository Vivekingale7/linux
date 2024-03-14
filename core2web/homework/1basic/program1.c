#include<stdio.h>
void main(){
       char x;
       char y;
    printf("enter the starting alphabet:");
	  scanf(" %c",&x);
    printf("enter the ending alphabet:");
    scanf(" %c",&y);
for (int i=x;i<=y;i++){
	printf(" %c",i);
}
}
