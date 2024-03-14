#include<stdio.h>
        void main()
{
	int age;
	printf("Enter Your Age: ");
	scanf("%d",&age);
	if(age<18)
	{
		printf("You are not Eligible for voting.\n");
	}
	else
	{
		printf("You are Eligible for Voting.\n");
	}
}
