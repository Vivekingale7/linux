#include<stdio.h>
        void main()
{
	int marks;
	printf("Enter your Marks: ");
	scanf("%d",&marks);
	if(marks>80)
	{
		printf("Grade A\n");
	}
	else if(marks>70)
	{
		printf("Grade B\n");
	}
	else if(marks>60)
	{
		printf("Grade C\n");
	}
	else
	{
		printf("Grade D\n");
	}
	        printf("END OF PROGRAM.\n");
}

