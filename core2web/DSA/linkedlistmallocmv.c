//28-11-2022

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Movie{
	int tcno;
	char mvName[20];
	float rating;
	struct movie *next;

}mv;

void accessData(mv *ptr){

	printf("%d\n",ptr->tcno);
	printf("%s\n",ptr->mvName);
	printf("%f\n",ptr->rating);
	printf("%p\n",ptr->next);
	}
void main(){
	mv *mv1=(mv*)malloc(sizeof(mv));
	mv *mv2=(mv*)malloc(sizeof(mv));
	mv *mv3=(mv*)malloc(sizeof(mv));

	mv1->tcno=1;
	strcpy(mv1->mvName,"VK");
	mv1->rating=9.5;
	mv1->next=mv2;

	mv2->tcno=2;
	strcpy(mv2->mvName,"RM");
	mv2->rating=9.4;
	mv2->next=mv3;

	mv3->tcno=4;
	strcpy(mv3->mvName,"SK");
	mv3->rating=9.8;
	mv3->next=NULL;

	accessData(mv1);
	accessData(mv2);
	accessData(mv3);
}
