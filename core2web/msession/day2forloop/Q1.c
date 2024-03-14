/*WAP to print the of odd number as it is and cube of even nummber between the range 
input: Enter start 10
	enter End 20
	*/



#include<stdio.h>
void main(){

	int start,end;
	printf("Enter starting number:\n");
	scanf("%d",&start);
	printf("Enter ending number:\n");
	scanf("%d",&end);

	for(int i=start;i<=end;i++){
		if(i%2==1){
			printf("%d  ",i);
		}else{
			printf("%d  ",i*i*i);
		}
	}
}
