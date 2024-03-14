// Relation between Array and pointer

#include<stdio.h>

void main(){

        int size;

        printf("Enter Size: ");
        scanf("%d",&size);

        int arr[size];

        printf("Enter Elements: ");
        
        for(int i=0;i<size;i++){

            scanf("%d",&arr[i]);
        }

        for(int i=0;i<size;i++){

                printf("%d",*(arr+i));
        }
}