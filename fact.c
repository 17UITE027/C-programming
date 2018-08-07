#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  for(i=1;i<n;i++)
  {
      if(n==1)
          return 1;
      else
          return n*factorial(n-1);
  }
  return 0;
}
