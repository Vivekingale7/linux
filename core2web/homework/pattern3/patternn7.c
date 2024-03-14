/*
 1   4   27
 4   27  16
 27  16  125


*/





#include<stdio.h>
        void main(){
                int x=1,y=2;
                for (int i=1;i<=3;i++){

                        for(int j=1;j<=3;j++){
                             if((i+j)%2==1){
				   printf("%d  ",x*x);
                                    x++;
			     }else{
				     printf("%d ",x*x*x);
				     x++;
                        }
			}
		       	printf("\n");
                       x=y; 
    			y++;		       
                }
        }

