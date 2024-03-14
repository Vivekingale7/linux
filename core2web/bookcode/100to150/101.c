#include<stdio.h>
	void main(){
		char ch=127;
		ch=ch+1;
		printf("%d",ch);  //-128 bz value is going to wrap up at runtime whenever u try to store that time it will br 128
	}
