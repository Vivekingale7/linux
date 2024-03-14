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
	
	if(x>y && y>z){
		printf("x input has max value");
	} else if(y>z && y>x){
		printf("y input has max value");
	}else if(z>x && z>y){
		printf("z input has max value");
	} else{
	printf("x,y,z has same value");
	}
}
