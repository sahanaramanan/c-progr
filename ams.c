#include<stdio.h>
int main()
{
   int i,n,remainder,t,res;
   printf("enter the number:");
   scanf("%d",&n);
   n=t;
   while (n!= 0)
    {
        remainder = n%10;
        res += remainder*remainder*remainder;
        n=n/ 10;
    }

    if(res == n)
        printf("%d yes",n);
    else
        printf("%d no",n);

    return 0;
}
