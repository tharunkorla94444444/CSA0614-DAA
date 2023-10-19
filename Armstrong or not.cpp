#include<stdio.h>
#include<ctype.h>
int main()
{
	int n,temp,r,sum=0;
	printf("enter the number::");
	scanf("%d",&n);
	temp=n;
	if(isdigit(n))
	{
	while(n!=0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp==sum)
	{
		printf("The given number is Armstrong number.");
	}
	else
	{
		printf("The given number is Not Armstrong number.");
	}
	}
	else
		printf("invalid input.");
}
