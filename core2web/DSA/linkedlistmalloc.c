//28-11-2022
//link list using malloc


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Employee{
	int EmpId;
	char EmpName[20];
	float sal;
	struct Employee *next;
}Emp;
void main(){
	Emp *Emp1=(Emp*)malloc(sizeof(Emp));
	Emp *Emp2=(Emp*)malloc(sizeof(Emp));
	Emp *Emp3=(Emp*)malloc(sizeof(Emp));

	Emp *head = Emp1;

	(*Emp1).EmpId = 1;
	strcpy((*Emp1).EmpName,"KANHA");
	(*Emp1).sal=45.00;
	(*Emp1).next= Emp2;
	
	(*Emp2).EmpId = 2;
	strcpy((*Emp2).EmpName,"Aj");
	(*Emp2).sal=35.00;
	(*Emp2).next= Emp3;
	
	(*Emp3).EmpId = 3;
	strcpy((*Emp3).EmpName,"sk");
	(*Emp3).sal=85.00;
	(*Emp3).next= NULL;

	printf("%d\n",head->EmpId);
	printf("%s\n",head->EmpName);
	printf("%f\n",head->sal);

	printf("%d\n",(*Emp1).next->EmpId);
	printf("%s\n",(*Emp1).next->EmpName);
	printf("%f\n",(*Emp1).next->sal);
	
	printf("%d\n",Emp3->EmpId);
	printf("%s\n",Emp3->EmpName);
	printf("%f\n",Emp3->sal);
}
