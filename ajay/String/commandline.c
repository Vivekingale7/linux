#include<stdio.h>

void main(int argc,char* argv[]){

	printf("%s\n",argv[1]);
	printf("%c\n",argc);

	for(int i=0;i<argc;i++){
	
		printf("%s\n",argv[i]);
	}
}
