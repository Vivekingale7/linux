#include<stdio.h>
	void main(){
		printf("start main");
		char ch1= 'A';
		char ch2= '48';
		if (ch1){
			printf("in first if block\n");
		}
		if(ch2){
			printf("in second if block\n");
		}
		printf("end main");
	}
/*
 * 29.c:5:13: warning: multi-character character constant [-Wmultichar]
    5 |   char ch2= '48';
      |             ^~~~
29.c:5:13: warning: overflow in conversion from ‘int’ to ‘char’ changes value from ‘13368’ to ‘56’ [-Woverflow]
*/
