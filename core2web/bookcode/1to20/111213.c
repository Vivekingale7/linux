#include<stdio.h>
	void main(){
		int x=5;
		int ans;
		printf("%d\n",x);    		//5
		
		ans = x++ + x++;

		printf("%d\n",ans);      	//11
		printf("%d\n",x);      		//7
	 
		ans = x++ + ++x;

		printf("%d\n",ans);      	//16
		printf("%d\n",x);      		//9
	
		ans = ++x + ++x + ++x;

		printf("%d\n",ans);      	//34
		printf("%d\n",x);      		//12
	
		ans = ++x + ++x + ++x + ++x;

		printf("%d\n",ans);      	//59
		printf("%d\n",x);      		//16
	}
