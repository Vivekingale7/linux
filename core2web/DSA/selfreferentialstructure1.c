#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct Employee{
	int empId;
	char empName[20];
	float sal;
	struct Employee *next;
}emp;
void main(){
	emp obj1,obj2,obj3;
 	
	emp *head = &obj1 ;
	
        obj1.empId=10;
	strcpy(obj1.empName,"Vivek");
	obj1.sal=50.00;
	obj1.next=&obj2;

	obj2.empId=20;
	strcpy(obj2.empName,"Ansh");
	obj2.sal=60.00;
	obj2.next=&obj3;
	
	obj3.empId=30;
	strcpy(obj3.empName,"krishna");
	obj3.sal=40.00;
	obj3.next=NULL;
	
	printf("%d\n",obj2.next->empId);
	printf("%s\n",obj2.next->empName);
	printf("%f\n",obj2.next->sal);

	printf("%d\n",obj1.next->empId);
	printf("%s\n",obj1.next->empName);
	printf("%f\n",obj1.next->sal);

	printf("%d\n",head->empId);
	printf("%s\n",head->empName);
	printf("%f\n",head->sal);
}
