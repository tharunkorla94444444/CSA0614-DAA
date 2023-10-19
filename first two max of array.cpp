#include<stdio.h>
int main()
{
	int n,a[20],temp,i,j;
	printf("enter the size of array :");
	scanf("%d",&n);
	printf("enter the array elements :");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
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
	printf("The first two minimum numbers of given array is (%d,%d)",a[0],a[1]);
}
