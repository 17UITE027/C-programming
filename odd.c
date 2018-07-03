#include<stdio.h>
int main()
{
  int N,Q;
  scanf("%d %d",&N,&Q);
  if(N<=100000 && Q<=100000)
  {
      while(N<=Q)
      {
          if(N%2!=0)
              printf("%d",N);
         N++;
      }
   }
   return 0;
}
