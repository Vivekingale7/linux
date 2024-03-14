#include<stdio.h>
void main(){
	int x;
	int y;
	
	printf("enter the value:");
	scanf("%d %d",&x,&y);

	if(x>y){
		printf("%d is max number among %d & %d\n",x,x,y);
	} else{
		printf("%d is max number among %d & %d\n",y,x,y);
	}
}
	
