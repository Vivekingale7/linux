#include<stdio.h>
	void main(){
		int x=243;
		int rem;
		printf("ENTER THE NUMBER:\n");
		scanf("%d",&x);
		while(x!=0){
			rem=x%10;
			printf("%d\n",rem);
			x=x/10;
		}
}
