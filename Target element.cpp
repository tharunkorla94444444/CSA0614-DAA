#include<stdio.h>
int n,t,a[20],i,j,temp,c=0;
int check(int)
{
	for(i=0;i<n;i++)
	{
		if(a[i]==t)
		{
			c=1;
			printf("Target found at a[%d]",i);
			break;
		}
		else
			continue;
	}
	if(c==0)
		printf("\nTarget not found.");
}
int main()
{
	printf("enter the no.of numbers");
	scanf("%d",&n);
	printf("enter the target number");
	scanf("%d",&t);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	check(t);
	 
}
