#include<stdio.h>
	
void main(){
	
	char ch=65;
	for(int i=1;i<=4;i++){
		for(int j=1;j<=i;j++){

			if((j)%2==0){
			printf("%c\t",ch);
			}else{
				printf("%c\t",ch+32);
			}
		}
		printf("\n");
		ch++;
	}
}
