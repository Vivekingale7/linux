#include<stdio.h>
        void main()
{
	int age;
	printf("Enter Your Age: ");
	scanf("%d",&age);
	if(age>25 && age<30)
	{
		printf("Your Age is: %d\n",age);
		printf("Let's go for a Coffee\n");
	}
	else
	{
		printf("Your Age is: %d\n",age);
		printf("Go Home\n");
	}
}
