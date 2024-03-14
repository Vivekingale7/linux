//program if number is even print that in reverse order to 1 and if no is odd print no odd with reverse order by diff two to 1
/*input 6
output : 6 5 4 3 2 1
input 7
output : 7 5 3 1
*/


#include<stdio.h>
void main(){
	int x;
	printf("enter the number:");
	scanf("%d",&x);
  if (x%2==0){
	  while(x>=1){
		  printf("%d ",x);
		  x--;
	   }} else if(x%2==1){
		  while(x>=1){
			  printf("%d ",x);
			  x=x-2;
	  }
      }
}





