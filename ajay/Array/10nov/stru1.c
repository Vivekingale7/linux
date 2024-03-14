#include<stdio.h>

struct Demo{

	int x:4;
	int y:8;
};

void main(){

	struct Demo obj={5,50};

	printf("%d\n",obj.x);

}
