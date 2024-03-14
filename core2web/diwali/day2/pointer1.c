/*
1). WAP and take one integer pointer, two integer pointer to an pointer and store address in it, Print that Data by
dereferencing all three Pointer.*/

#include<stdio.h>
	void main(){
		int x=10;

		int *ptr1=&x;			
		int *ptr2=ptr1;
		int **ptr3=&ptr2;
		int ***ptr4=&ptr3;

		printf("%p\n",&x);			
		printf("%p\n",ptr1);
		printf("%p\n",ptr2);
		printf("%p\n",ptr3);
		printf("%p\n",ptr4);
		
		printf("%ls\n",&x);
		printf("%d\n",*ptr1);
		printf("%d\n",*ptr2);
		printf("%d\n",**ptr3);
		printf("%d\n",***ptr4);
	}

/*
output:
0x7ffd606c5574
0x7ffd606c5574
0x7ffd606c5574
0x7ffd606c5578
0x7ffd606c5580
10
10
10
10
*/
