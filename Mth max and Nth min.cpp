#include<stdio.h>
int main()
{
	int m,n,s,a[20],temp,i,j;
	printf("enter the noof elements");
	scanf("%d",&s);
	printf("enter the m th value:");
	scanf("%d",&m);
	printf("enter the n th value:");
	scanf("%d",&n);
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<s;i++)
	{
		for(j=i+1;j<s;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	if(m>0 && n>0 && m<s && n<s)
	{
	printf("m th largest value :%d\n ",a[s-m]);
	printf("m th largest value :%d\n ",a[n-1]);
	printf(" The sum of mth and nth is :%d",a[m]+a[n-1]);
	printf(" The diff of mth and nth is :%d",a[m]-a[n-1]);
	}
	else
		printf("invalid input.");
}
