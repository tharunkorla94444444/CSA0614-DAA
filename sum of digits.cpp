#include<stdio.h>
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("The sum of the digits of the given num is:%d",sum)
}
