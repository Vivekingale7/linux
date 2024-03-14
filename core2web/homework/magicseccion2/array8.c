//8. Write output & draw a good diagram for the code.


#include<stdio.h>
	void main(){


          char arr[]={'A','B','C','D','E'}:
          char *ptr=&arr[2];			//C
               (*ptr)++;			//D
		ptr=ptr+2;			//E
		printf("%c\n",*ptr);		//D
		for(int i=0; i<5; i++){
	printf("%c",arr[i]);

}
// OP={'A','B','D','D','E'}
