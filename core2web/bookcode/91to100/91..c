#include<stdio.h>

void main(){

	int arr[]={1,2,3,4,5};

	int *iptr=&(arr[0]);

	printf("%p\n",iptr); 		//100
        printf("%p\n",*iptr);  		//0x1
	
	printf("%d\n",iptr);  		//garbage value
	printf("%d\n",*iptr); 		//1

	printf("%d\n",*iptr++);     	//1	
	printf("%d\n",*(iptr++));	//2	
	printf("%d\n",++*iptr);		//4     
	printf("%d\n",(*iptr)++);	//4	
	printf("%d\n",--*iptr);		//4       
	

	printf("%d\n",(*iptr++));	//4	
	printf("%d\n",(*iptr)++);	//5	 
	printf("%d\n",*iptr++);		//gv        
	printf("%d\n",(*iptr++));	// gv	 	       



}
/*
0x7ffdba483920
0x1
-1169671904
1
1
2
4
4
4
4
4
5
5   */
