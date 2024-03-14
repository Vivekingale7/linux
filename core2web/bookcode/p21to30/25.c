#include<stdio.h>
	void main(){
		int x=10,20,30;
		printf("%d\n",x);
		int y={10,20,30};
		printf("%d\n",y);
		int z=(10,20,30);
		printf("%d\n",z);
	}

/*
 * 25.c:3:12: error: expected identifier or ‘(’ before numeric constant
    3 |   int x=10,20,30;
      |            ^~
25.c:5:13: warning: excess elements in scalar initializer
    5 |   int y={10,20,30};
      |             ^~
25.c:5:13: note: (near initialization for ‘y’)
25.c:5:16: warning: excess elements in scalar initializer
    5 |   int y={10,20,30};
      |                ^~
*/
