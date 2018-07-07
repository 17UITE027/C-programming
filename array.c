
#include<stdio.h>
int main()
{
  int N,K,i=1,j=1,sum=0;
  scanf("%d %d",&N,&K);
  for(i=1;i<=N;i++)
    printf("%d\t",i);
    i++;
  for(j=1;j<=K;j++)
    sum=sum+j;
  printf("\n%d",sum);
  return 0;
}
