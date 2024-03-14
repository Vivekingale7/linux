#include<stdio.h>
        void main()
{
	int a;
	printf("Enter a Number: ");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("Number is Even.\n");
	}
	else if(a%3==0)
	{
		printf("Number is Odd.\n");
	}
	else if(a<0)
	{
		printf("Negative Integer is not Allowed.\n");
	}
	else
	{
		printf("Integer is prime Number.\n");

	}	
}
