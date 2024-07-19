#include<stdio.h>
#define n 5
#define m 3
int main()
{
	int i,j,count=0;
	int need[n][m];
	int finish[n]={0,0,0,0,0};
	int work[m],safety[n];
	int pro[n]={0,1,2,3,4};
	int avail[m]={3,3,2};
	int max[n][m]={{7,5,3},{3,2,2},{9,0,2},{2,2,2},{4,3,3}};
	int alloc[n][m]={{0,1,0},{2,0,0},{3,0,2},{2,1,1},{0,0,2}};
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			need[i][j]=max[i][j]-alloc[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		work[i]=avail[i];
	}
	while(count<n)
	{
		for(i=0;i<n;i++)
		{
			if(finish[i]==0)		
			{

				for(j=0;j<m;j++)
				{
					if(need[i][j]>work[j])
						break;
					else
					{
						work[j]=work[j]+alloc[i][j];
							safety[count++]=i;

					}
				}


			}
			finish[i]=1;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",safety[i]);
	}
	
	
	
	return 0;
}
