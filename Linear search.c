#include<stdio.h>
int main()
{
	int n,t,a[30],i;
	printf("number of elements you are going to enter ::");
	scanf("%d",&n);
	printf("enter the required target number::");
	scanf("%d",&t);
	printf("enter the numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==t)
		{
			printf("The position of the target element is a[%d]",i);
		}
	}
}
