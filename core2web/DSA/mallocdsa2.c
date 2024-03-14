#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Company{
	char cName[20];
	int Empcount;
	float revinew;
}

void main(){
//typecasting

struct company *cptr=(struct company*)malloc(sizeof(struct company));
	

	strcpy(cptr->cName,"Infosys");
	cptr->emppcount=700;
	(*cptr).revinew=150.50;

	printf("Company name=%s\n",cptr->cName);
	printf("Empcount=%d\n",cptr->Empcount);
	printf("Company revinnew=%f\n",cptr->revinew);
}

	

