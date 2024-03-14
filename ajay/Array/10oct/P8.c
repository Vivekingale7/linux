#include<stdio.h>
#include<string.h>

void main(){

	char *str="Shashi";

	printf("%p\n",str);
	printf("%p\n",*str);
	printf("%c\n",str);
	printf("%c\n",*str);

	str++;
	
	printf("%p\n",str);
	printf("%p\n",*str);
	printf("%c\n",str);
	printf("%c\n",*str);

	printf("%s\n",str);


}
