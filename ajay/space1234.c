#include<stdio.h>
void main(){
	int x=1;
	for(int i=0;i<=3;i++){
		for(int sp=0; sp<i; sp++){
			printf("_ ");
		}
		for(int j=i;j<=3;j++){
			printf("%d ",x);
			x++;
		}
		printf("\n");
	}

}
