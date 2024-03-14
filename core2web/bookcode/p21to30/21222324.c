#include<stdio.h>
	void main(){
		int x=5;
		int y=7;
		int ans;
		ans= ++x || ++y;       
		printf("%d\n",ans);    	//1
		ans= x-- || ++y;       
		printf("%d\n",ans);    	//1
		ans=x<<3;
		printf("%d\n",ans);   	
	
		ans=y>>2;
		printf("%d\n",ans);   	
		ans=x--<<3;
		printf("%d\n",ans);   	

		ans=++y>>4;
		printf("%d\n",ans);   	
	}
