/*

Write a program to print the value and size of the below variables.Take all
the values from the user
num=10
chr = ‘S’
rs = 55.20
crMoney = 542154313480.544543
*/

#include<stdio.h>
	void main(){
		int num;
		printf("Enter your number: \n");
		scanf("%d",&num);
		printf("%d\n",num);

		char ch ;
		printf("Enter your character:\n");
		scanf(" %c",&ch);
		printf("%c\n",ch);


		float rs ;
		printf("Enter your rs: \n");
		scanf("%f",&rs);
		printf("%f\n",rs);
		
		double crmoney ;
		printf("Enter your crmoney: \n");
		scanf("%lf",&crmoney);
		printf("%lf\n",crmoney);

		printf("%ld\n",sizeof(int));
		printf("%ld\n",sizeof(char));
		printf("%ld\n",sizeof(float));
		printf("%ld\n",sizeof(double));
	}
