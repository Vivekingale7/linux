#include<stdio.h>
void main(){
	int input;
	int x=2;
	int y=3;
    switch(input){
	case 5:
	    printf("5");
	    break;
	case 2+3:
	    printf("5");  //duplicate case value
  	    break;
	case 3+2:
	    printf("5");    //duplicate case value
	    break;
	case 5*1:           //duplicate case value
	    printf("5");
	    break;
    }
}
