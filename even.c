#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    printf("enter the even num bt 1to 10  \n",n);
    for(i=1;i<10;i++)
    {
        if(i%2==0)
        {
        printf("%d",i);
        }
    }
    
}
