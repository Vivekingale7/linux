#include<stdio.h>

void main(){

	char carr[]={'c','o','r','e','2','W','e','b'};

	char *str="core2web";

	printf("%s\n",carr);

	printf("%ld\n",sizeof(carr));
	printf("%ld\n",sizeof(str));

	for(int i=0;i<8;i++){
	
	
		printf("%c\n",carr[i]);
	}

	carr[4]='3';

	printf("%s\n",carr);

	*str='B';

	printf("%p\n",str);
}
