#include<stdio.h>
void main(){
	int x=5;
	int output;

	printf("%d \n",x);       //5
     printf("%d \n",output);     //0

    output=x;
  printf("%d \n",x);           //5
  printf("%d\n",output);       //5

  output=++x;                  //x+1
  printf("%d\n",x);            //6
  printf("%d\n",output);       //6
 printf("%d",x++);   
}
