#include<stdio.h>
        void main()
{
        int a,i,sum=0;
        while(1)
        {
                printf("Enter a Number: ");
                scanf("%d",&a);
                if(a<0)
                {
                        break;
                }
                sum=sum+a;
        }
        printf("%d\n",sum);
}

