#include<stdio.h>

	void main(){


		int arr[]={10,20,30,40,50};

		int *ptr1=&(arr[0]);
		int *ptr2=&(arr[1]);
		
		int x=ptr1-ptr2

		printf("%d\n",ptr1*ptr2);	
		printf("%d\n",ptr1/ptr2);	
		printf("%d\n",ptr1%ptr2);


		/*
		 : error: expected ‘,’ or ‘;’ before ‘printf’
   13 |   printf("%d\n",ptr1*ptr2);
      |   ^~~~~~
109.c:14:21: error: invalid operands to binary / (have ‘int *’ and ‘int *’)
   14 |   printf("%d\n",ptr1/ptr2);
      |                     ^
109.c:15:21: error: invalid operands to binary % (have ‘int *’ and ‘int *’)
   15 |   printf("%d\n",ptr1%ptr2);

*/
	}

