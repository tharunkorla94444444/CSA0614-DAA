#include<stdio.h>
#define m 9999999999
int main()
{
	int n,k=0,i,j,a[20],sum=0;
	printf("enter the n value::");
	scanf("%d",&n);
		for(i=1;i<m;i++)
		{
			if(k!=n)
			{
			for(j=1;j<i;j++)
			{
				if(i%j==0)
				{
					sum=sum+j;
				}
			}
			if(sum==i)
			{
				k++;
				a[k]=sum;
			}
			sum=0;
			}
			else
				break;
		}
	printf("First n perfect numbers are ::\n");
	for(i=1;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
	
}
