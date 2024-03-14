//Self Referential Structure

#include <stdio.h>
#include <string.h>
struct Company {
	
	int empCount;
	char cName[20];
	float revenue;
	struct Company *next;
};
void main() {

	struct Company obj1,obj2,obj3;

	struct Company *head = &obj1;

	head->empCount = 650;
	strcpy(head->cName,"AMD");
	head->revenue = 7.00;
	head->next = &obj2;
	
	head->next->empCount = 900;
	strcpy(head->next->cName,"INTEL");
	head->next->revenue = 9.00;
	head->next->next = &obj3;
	
	head->next->next->empCount = 1100;
	strcpy(head->next->next->cName,"NVIDIA");
	head->next->next->revenue = 12.00;
	head->next->next->next = NULL;

	printf("%d\n",head->empCount);
	printf("%s\n",head->cName);
	printf("%f\n",head->revenue);
	
	printf("%d\n",head->next->empCount);
	printf("%s\n",head->next->cName);
	printf("%f\n",head->next->revenue);
	
	printf("%d\n",head->next->next->empCount);
	printf("%s\n",head->next->next->cName);
	printf("%f\n",head->next->next->revenue);



}
