#include<stdio.h>
//#include<>

	void main(){
		char carr[]={'A','B','C','D','E'};
		
		char *cptr=carr;
		int *iptr=carr;

		printf("%c\n",*cptr);
		printf("%c\n",*iptr);

		cptr++;
		iptr++;

		printf("%c\n",*cptr);
		printf("%c\n",*iptr);
	}
