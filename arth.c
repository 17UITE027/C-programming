#include<stdio.h>
#include<conio.h>
int main()
{
int n,a,d,s,ans=0,i;
scanf("%d",&n);
scanf("%d",&a);
scanf("%d",&d);
for(i=1;i<=n;i++)
{
s=a+(i-1)*d;
ans=ans+s;
}
printf("%d",ans);
return 0;
}
