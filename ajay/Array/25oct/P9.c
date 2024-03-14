#include<stdio.h>

void main(){

	char ch[]={'A','B','C'};
	char ch1[]={'D','E','F'};
	char ch2[]={'G','H','I'};

	char *cparr[]={&ch,&ch1,&ch2};

	cparr[0]=ch+1;
	cparr[1]=ch1+1;
	cparr[2]=ch2+1;
	
	for(int i=0;i<3;i++){
	
		printf("%c\n",*(cparr[i]));
	}

}
