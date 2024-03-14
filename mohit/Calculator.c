#include<stdio.h>
        void main()
{
	int a,b,Sum,Sub,Mul,Div;
	char Operator;
	printf("Enter a Operator: ");
	scanf("%c",&Operator);
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	switch(Operator)
	{
		case '+':
			Sum=a+b;
			printf("Additon = %d\n",Sum);
			break;

		case '-':
                        Sub=a-b;
                        printf("Subtraction = %d\n",Sub);
                        break;

		case '*':
                        Mul=a*b;
                        printf("Multiplication = %d\n",Mul);
                        break;

		case '/':
                        Div=a/b;
                        printf("Division = %d\n",Div);
                        break;

		default:
			printf("Enter a Valid Operator.\n");
			break;
	}
}
