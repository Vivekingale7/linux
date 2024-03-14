/* WAP that accept a string from the user and print the lenght of the string. Use mystrlen()
 
IP:"my mom always said my life is like a box of chockaltes. you"
*/


#include<stdio.h>
	int mystrlen(char* str){

		int count;
		while(*str!='\0'){
			str++;
			count++;
		}
		return count;
	}
void main(){
	char str[200];
	printf("Enter the string:");
	gets(str);
	int count=mystrlen(str);
	printf("The lenght of entered string is %d",count);
}

