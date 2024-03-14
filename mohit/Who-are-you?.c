#include<stdio.h>
        void main()
{
	int age;
	printf("Enter Your Real Age: ");
	scanf("%d",&age);
	if(age<18)
	{
		printf("You are Child!\n");
	}
	else if(age>=18 && age<30)
	{
		printf("You are Adult Now!\n");
	}
	else if(age>=30)
	{
		printf("You are Old\n");
	}
}
