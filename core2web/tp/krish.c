/*input:123456

output: 654321
*/

#include<stdio.h>
	void main(){
		int x=123456,rem,count=0,ru;

		while(x!=0){
                        ru=x%10;
                        
                        x=x/10;
                        count++; 
//	                printf("\n");		
		
			printf("%d ",ru);
		}

			while(ru!=0){
                        rem=ru%10;
                        printf("%d ",rem);
                        ru=ru/10;
				     
                   }
		
		
		printf("\n");
		printf(" %d",count);
//		printf("%d",rem);


	}
			
