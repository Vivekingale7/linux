//take two value from user and print your name v=with order

#include<stdio.h>
void main(){
	int x;
	int y;
	printf("starting no:");
	scanf("%d",&x);

	printf("ending no:");
	scanf("%d",&y);
   for (int i=x;i<=y;i++){
          printf("viv__%d\n",i);
   }
}
