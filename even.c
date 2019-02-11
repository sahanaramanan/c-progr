#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    printf("enter the even num bt 6 to  9  \n",n);
    for(i=8;i<=9;i++)
    {
        if(i%2==0)
        {
        printf("%d",i);
        }
    }
    return 0;
    
}
