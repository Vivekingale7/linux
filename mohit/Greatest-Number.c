#include<stdio.h>
        void main()
{
	int a,b;
	printf("Enter A: ");
	scanf("%d",&a);
	printf("Enter B: ");
	scanf("%d",&b);
	if(a>b)
	{
		printf("Greatest Number is: %d\n",a);
	}
	else if(b>a)
	{
		printf("Greatest Number is: %d\n",b);
	}
	else
	{
		printf("Number are Same.\n");
	}
}
