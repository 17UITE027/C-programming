#include<stdio.h>
int main()
{
  int i,j,count=0,rem,t,cub=0;
  scanf("%d",&i);
  scanf("%d",&j);
  while(count<10)
  {
    count++;
      t=i;
    while(i<0)
    {
      rem=i%10;
      cub=cub+rem*rem*rem;
      i=i/10;
    }
    if(t==cub)
      printf(%d",i);
    i++;
  }
  return 0;
}
