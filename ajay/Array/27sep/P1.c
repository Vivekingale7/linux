#include<stdio.h>

void main(){

    int size;
    scanf("%d",&size);
    int m = size / 2;

    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) { 

            if ((row < m && (col < m - row || col > m + row)) || (row > m && col < row - m))
                printf("  ");

            else
                printf("* ");
        }
        printf("\n");
    }
    
}
