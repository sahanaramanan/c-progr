#include <stdio.h>
int main()
{
  int t1, t2, a, b, flag;
  printf("Enter two numbers(intevals): ");
  scanf("%d %d", &t1, &t2);
  printf("Prime numbers between %d and %d are: ", t1, t2);
  for(a=t1+1; a<t2; ++a)
  {
      flag=0;
      for(b=2; b<=a/2; ++b)
      {
        if(a%b==0)
        {
          flag=1;
          break;
        }
      }
      if(flag==0)
        printf("%d ",a);
  }
  return 0;
}
