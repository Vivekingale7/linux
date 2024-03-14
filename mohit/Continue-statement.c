#include<stdio.h>
        void main()
{
        int a,i,sum=0;
        for(i=1;i<=5;i++)
        {
                printf("Enter a Number: ");
                scanf("%d",&a);
                if(a<0)
                {
                        continue;
                }
                sum=sum+a;
        }
        printf("%d\n",sum);
}

