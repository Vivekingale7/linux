//write a program to check whether input value of traingle is pythagorus triplet or not

#include<stdio.h>
void main(){
	int x,y,z;
	printf("enter the x value:\n");
	scanf("%d",&x);

	printf("enter the y value:\n");
	scanf("%d",&y);

	printf("enter the z value:\n");
	scanf("%d",&z);
	
	if(x*x==y*y+z*z){
		printf("%d %d %d is a pythagorus triplet",x,y,z);
	}else{
	   printf("%d %d %d is not a pythagorus triplet",x,y,z);
	}
}
