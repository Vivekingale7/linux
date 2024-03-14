#include<stdio.h>
	void main(){
		int x=10;
		void fun(){
			int y=20;
			int ans;
			ans=++x + ++y;
			printf("%d\n",ans);  //32
		}
		void main(){
			printf("start main\n");
			fun();
			printf("%d\n",x);    //11
			printf("end main\n");
		}
	}
