//Self Referential Structure

#include <stdio.h>
#include <string.h>

struct Batsman {
	
	int jerNO;
	char pName[20];
	float avg;
	struct Batsman *next;
};
void main() {

	struct Batsman obj1,obj2,obj3;

	struct Batsman *head = &obj1;

	head->jerNO = 18;
	strcpy(head->pName,"Virat");
	head->avg = 172.16;
	head->next = &obj2;

	head->next->jerNO = 45;
	strcpy(head->next->pName,"Rohit");
	head->next->avg = 165.56;
	head->next->next = &obj3;
	
	head->next->next->jerNO = 7;
	strcpy(head->next->next->pName,"MSD");
	head->next->next->avg = 192.78;
	head->next->next->next = NULL;

	printf("%d\n",head->jerNO);
	printf("%s\n",head->pName);
	printf("%f\n",head->avg);
	
	printf("%d\n",head->next->jerNO);
	printf("%s\n",head->next->pName);
	printf("%f\n",head->next->avg);
	
	printf("%d\n",head->next->next->jerNO);
	printf("%s\n",head->next->next->pName);
	printf("%f\n",head->next->next->avg);
	

}
