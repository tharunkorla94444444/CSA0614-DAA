#include<stdio.h>
int main()
{
	int n,a,b,f[20],i,fib,sum=0;
	printf("enter the n value:");
	scanf("%d",&n);
	a=0;
	f[0]=0;
	b=1;
	f[1]=1;
	printf("%d %d ",a,b);
	 
	for(i=2;i<2*n+1;i++)
	{
		fib=a+b;
		printf("%d ",fib);
		f[i]=fib;
		if(i%2==0)
		{
			sum=sum+f[i];
		}
		a=b;
		b=fib;
	}
	printf("\nThe sum of %d even indices of fibo series is %d.",n,sum);
	
	
	
}
