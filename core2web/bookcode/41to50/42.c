#include<stdio.h>
void main(){
	int x;
	printf("enter the value\n");
	scanf("%d",&x);

	switch(x){
	    case 65:
		    printf("value of x is 65\n");
		    break;
	    case 'A':
		    printf("value of x is A\n");       // duplicate case value
		    break;

	    case 66:
		    printf("value of x is 65\n");
		    break;
	    case 'B':
		    printf("value of x is B\n");     //duplicate case value
	      	  break;
	}
}
