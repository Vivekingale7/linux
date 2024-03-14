/*wap to print the divisior & count of divisior of entered num
 * input 15
 * output 1 3 5 15
   	the count of divisior is 4 
	and addition of divisior is 25 
*/
#include<stdio.h>
	void main(){
		int sum=0,count=0,num;
		printf("enter the number:\n");
		scanf("%d",&num);
		for (int i=1;i<=num;i++){
			if(num%i==0){
				printf("%d\n",i);
			sum=sum+i;
			count++;
		}
		}printf(" %d\n",count);
		printf("%d\n",sum);

	

}

