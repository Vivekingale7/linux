#include<stdio.h>
        void main()
{
	int a,b,c;
	printf("Enter A: ");
	scanf("%d",&a);
	printf("Enter B: ");
	scanf("%d",&b);
	printf("Enter C: ");
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("Greatest Number is: %d\n",a);
	}
        else if(b>a && b>c)
	{
	printf("Greatest Number is: %d\n",b);
	}
        else if(c>a && c>b)
	{
		printf("Greatest Number is: %d\n",c);
	}
	else if(a<0 || b<0 || c<0)
	{
		printf("Negative number's are not Allowed.\n");
	}
	else if(b<a && b<c)
        {
        printf("Lowest Number is: %d\n",b);
        }
	else if(b>a && a<c)
        {
        printf("Lowest Number is: %d\n",a);
        }
	else if(b>c && a>c)
        {
        printf("Lowest Number is: %d\n",c);
        }
	else
	{
		printf("Numbers are Same.\n");
	}
}	

