#include<stdio.h>
int main()
{
	int a,rem,t,cub;
	scanf("%d",&a);
	t=a;
	while(a>0)
	{
		rem=a%10;
		cub=cub+rem*rem*rem;
		a=a/10;
	}
	if(cub==t)
		printf("yes");
	else
		printf("no");
	return 0;
}
