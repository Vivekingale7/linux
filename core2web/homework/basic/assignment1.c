//write a folder to print the value and size of the below variable

#include<stdio.h>
void main(){
	int num=10;
	char chr='s';
	float rs=55.20;
	double crMoney=543215431480.544563;

	printf("%d\n",num);
	printf("%c\n",chr);
	printf("%f\n",rs);
	printf("%f\n",crMoney);

	printf("%ld\n",sizeof(num));
	printf("%ld\n",sizeof(chr));
	printf("%ld\n",sizeof(rs));
	printf("%ld\n",sizeof(crMoney));

}
/* output:10
s
55.200001
543215431480.544556
4
1
4
8

*/
 
