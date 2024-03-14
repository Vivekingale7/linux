#include<stdio.h>
        void main() 
{
	int a,b,c;
	printf("Enter a: ");
	 scanf("%d",&a);
	 printf("Enter b: ");
	  scanf("%d",&b);
	  printf("Enter c: ");
	  scanf("%d",&c);
	  if(a>b)
	  {
		 if(a>c)
		 {
			 printf("\nGreatest number is: %d\n",a);
		 }
	  }
	else if(b>a)
	{
		if(b>c)
		{
			printf("\nGreatest number is: %d\n",b);
		}
	}
	else if(c>a)
	{
		if(c>b)
		{
			printf("\nGreatest number is: %d\n",c);
		}
	}
	else
	{
		printf("\nSorry ! Numbers are Same.\n\n");	
	}	
}


