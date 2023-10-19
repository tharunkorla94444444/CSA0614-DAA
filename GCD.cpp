#include<stdio.h>
int main()
{
	int a,b,c[20],j=0,i,k,gcd;
	printf("enter the values of a&b :");
	scanf("%d%d",&a,&b);
	for(i=1; i<a||i<b ;i++)
	{
		if(a%i==0 && b%i==0)
		{
			c[j]=i;
			j++;
		}
	}
	printf("The common divisors: ");
	for(k=0;k<j;k++)
	{
		printf("%d  ",c[k]);
	}
	printf("\nThe greatest common divisor is :: %d",c[j-1]);
}
