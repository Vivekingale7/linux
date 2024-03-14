/*
Program 2: WAP print the value of the below expressions.
x =9 ;
ans = ++x + x++ + ++x
Print ans value and print x
ans1= ++x + ++x + ++x + ++x
Print ans1 value and print x
ans2 = x++ + x++ + ++x + x++ + ++x
Print ans2 value and print x
ans3 = x++ + x++ + x++ + x++
Print ans3 value and print x

*/

#include<stdio.h>
        void main(){
		int x,ans,ans1,ans2,ans3;
		
		printf("Enter x: ");
		scanf("%d",&x);

		ans= ++x + x++ + ++x;
		printf("%d\n",ans);
		printf("%d\n",x);

		ans1= ++x + ++x + ++x + ++x;
                printf("%d\n",ans1);
                printf("%d\n",x);

		ans2 = x++ + x++ + ++x + x++ + ++x;
                printf("%d\n",ans2);
                printf("%d\n",x);

		ans3 = x++ + x++ + x++ + x++;
                printf("%d\n",ans3);
                printf("%d\n",x);
	}
