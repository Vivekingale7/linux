#include<stdio.h>
        void main()
{
	int num,i,a;
	printf("Enter a Number for which you want a Table: ");
	scanf("%d",&num);

	for(i=1;i<=10;i++)
	{
		a= num*i;
		printf("\n%d * %d = %d\n",num,i,a);
	}
}

