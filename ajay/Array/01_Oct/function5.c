//Array of function Pointer

#include<stdio.h>

void add(int x,int y){

	printf("sum is=%d\n",x+y);
}
void sub(int x,int y){

	printf("sub is=%d\n",x-y);
}
void mult(int x,int y){

	printf("mult is=%d\n",x*y);
}
void div(int x,int y){

	printf("div is=%d\n",x/y);
}

void main(){
	
	void(*ptr[4])(int,int)={add,sub,mult,div};
	//void(*ptr[4])(int,int)={&add,&sub,&mult,&div};    // both are same

	for(int i=0;i<4;i++){
	
		ptr[i](20,10);
	}

}
/*Output:
sum is=30
sub is=10
mult is=200
div is=2
*/

