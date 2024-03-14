/*
 wap to print all the composite number between a given range

input: enter start 1
       enter end 15

output: 4 6 8 9 10 12 14 15

*/

#include<stdio.h>
	void main(){
		int start,end,cnt=0;
	
		printf("enter the start:");
		scanf("%d",&start);

		printf("enter the end:");
		scanf("%d",&end);

		for(int i=start;i<=end;i++){

			cnt=0;
			for(int j=1;j<=end;j++){

				if(i%j==0 && i!=1){
				
					cnt++;
				}
			}
			if(cnt!=2 && i!=1){
				printf("%d ",i);
			}
		
		}
	}
