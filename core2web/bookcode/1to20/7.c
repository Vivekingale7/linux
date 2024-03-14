#include<stdio.h>
	void main(){
		int x=5;
		int ans=x++;
		printf("%d\n",x);    		//5
		printf("%d\n",output);    	//6
		output=++x;
		printf("%d\n",x);      		//6
		printf("%d\n",output);   	//6
	}
