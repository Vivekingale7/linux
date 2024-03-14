//write to print a countdown of days to submit the assignment


 
#include<stdio.h>
 	void main(){
		int x;
		printf("enter the days:");
		scanf("%d",&x);
	
/*		while(x>=0 && x!=1 && x!=0){
			printf("%d days remaining \n",x);
			x--;
			
			if(x==1){
			printf("%d day remaining\n",x);
		}
			if(x==0){
			printf("due date");
		}
	}
}
output::
enter the days:7
7 days remaining
6 days remaining
5 days remaining
4 days remaining
3 days remaining
2 days remaining
1 day remaining
*/
		while (x!=0){
			if(x==1){
			printf("%d day remaining\n",x);
			}
			printf("%d days remaining\n",x);
			x--;
		}printf("%ddue date",x);
}

