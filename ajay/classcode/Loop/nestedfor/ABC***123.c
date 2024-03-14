#include<stdio.h>

void fun(){
        
	char ch='A';
	int x=1;
	
	for(int i=1;i<=3;i++){
	
		for(int i=1;i<=3;i++){
		
			if(i%2==1){
			   
				printf("%c ",ch++);
			}else if(i%2==0){
			
				printf("%d ",x++);
			}
			
		}
		printf("\n");
	}
}




void main(){

	fun();
}
