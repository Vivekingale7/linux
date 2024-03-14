#include<stdio.h>
	void main(){
		int x=5;
		int ans;
		printf("%d\n",x);    		//5
		
		ans = ++x + x++;

		printf("%d\n",ans);      	//13
		printf("%d\n",x);      		//7
	 
	}
