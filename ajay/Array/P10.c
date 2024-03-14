// null pointer
//

#include<stdio.h>

void main(){

	int *iptr=NULL;
	int *iptr2;

	printf("%d\n",iptr);
	printf("%d\n",iptr2);

	if(iptr==iptr2){
	
		printf("Equal\n");
	}else{
	
		printf("Not Equal\n");
	}
}
