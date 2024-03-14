#include<stdio.h>
void main(){
	int x;
	printf("enter the no:");
	scanf("%d",&x);
  switch(x){
	case 1:{
		 printf("%d jan has 31 days/n",x);
	       	 break;
	       }
	case 2:{
		 printf("%d feb has 28 or 29 days/n",x);
		 break;
	       }
	case 3:{
		       printf("%d march has 31 days/n",x);
		break;
	       }
	case 4:{
		 printf("%d april has 30 days/n",x);
			 break;
	       }
	case 5:{
		 printf("%d may has 31 days/n",x);
			 break;
	       }
	case 6:{
		 printf("%d june has 30 days/n",x);
			 break;
	       }
	case 7:{
		 printf("%d july has 31 days/n",x);
			 break;
	       }
	case 8:{
		 printf("%d august  has 31 days/n",x);
			 break;
	       }
	case 9:{
		 printf("%d sept has 30 days/n",x);
			 break;
	       }
	case 10:{
		 printf("%d oct has 31 days/n",x);
			 break;
		}
	case 11:{
		 printf("%d nov has 30 days/n",x);
	         break;
		}
  default:{
		 printf("dec has 31 days");
}
}
}
