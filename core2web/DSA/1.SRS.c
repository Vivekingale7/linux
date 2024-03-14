//Self Referential Structure

#include <stdio.h>
#include <string.h>
typedef struct Employee {
	
	int empID;
	char empName[30];
	float sal;
	struct Employee *next;
}Emp;
void main() {
	
	Emp obj1,obj2,obj3;

	Emp *head = &obj1;
	obj1.empID = 1;
	strcpy(obj1.empName,"Dhiraj");
	obj1.sal = 70.00;
	obj1.next = &obj2;

	obj2.empID = 2;
	strcpy(obj2.empName,"Ganesh");
	obj2.sal = 75.00;
	obj2.next = &obj3;

	obj3.empID = 3;
	strcpy(obj3.empName,"Ajay");
	obj3.sal = 80.00;
	obj3.next = NULL;

	printf("%d\n",(*head).empID);
	printf("%s\n",(*head).empName);
	printf("%f\n",(*head).sal);
	
	printf("%d\n",obj1.next->empID);
	printf("%s\n",obj1.next->empName);
	printf("%f\n",obj1.next->sal);
	
	printf("%d\n",obj2.next->empID);
	printf("%s\n",obj2.next->empName);
	printf("%f\n",obj2.next->sal);
	


}
