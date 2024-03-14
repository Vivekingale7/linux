/*
2. WAP to calculate the count of even and odd elements
Take array size and array elements from the user
IP : enter array : 10 12 13 15 16 17 19 20 22 23
OP: even element count is
OP: odd element count is

*/

#include<stdio.h>

	void main(){

                int size;
                printf("Enter the size:\n");
                scanf("%d",&size);

                int arr[size];
		printf("Enter the element:\n");
                for(int i=0;i<size;i++){

                        scanf(" %d",&arr[i]);
                }
                
		int counteven=0,countodd=0;

                for(int i=0;i<size;i++){

                        if(arr[i]%2==0){
				counteven++;

                        }else if(arr[i]%2==1){
				countodd++;
			}
		}
		printf("even element count is %d\n",counteven);
		printf("even element count is %d\n",countodd);
	}
