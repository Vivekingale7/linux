#include<stdio.h>
void main(){
	int x,y,z;

	printf("enter the x value:");
	scanf("%d",&x);

	printf("enter the  value:");
	scanf("%d",&y);
	printf("enter the z value:");
	scanf("%d",&z);
	if (x*x==y*y+z*z){
		printf("%d %d %d it's a pythagorus triplet",x,y,z);
	}else{
		printf("%d %d %d it's not a puthagorus triplet",x,y,z);
	}
}
