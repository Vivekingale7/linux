//assignnment 3
//wap to find max among 3 number


#include<stdio.h>
void main(){
	int x,y,z;
	printf("enter x value:");
	scanf("%d",&x);

	printf("enter y value:");
	scanf("%d",&y);

        printf("enter z value:");
	scanf("%d",&z);
	
	if(x<y && x<z ){
		printf("%d is a minimum value",x);
	} else if(y<z && y<x){
		printf("%d is a  minimum value",y);
	}else if(z<x && z<y){
		printf("%d is  minimum value",z);
	} else if(x==y  && y>z){
		                printf("two of cases has same value");
	} else if(x==y  &&  x>z){
		printf("two of cases has same value");

	}else if(x==z  &&  x>y){
                printf("two of cases has same value");

        } 
       	else if(y==z && x>z  ){
		printf("two of cases has same value");
	} else{
	  printf("x,y,z has same value");
	}
}
