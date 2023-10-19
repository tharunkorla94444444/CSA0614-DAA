 #include<stdio.h>
#include<ctype.h>
int main()
{
	int n,rem,rev;
	printf("enter the number:");
	scanf("%d",&n);
	if(isdigit(n))
	{
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("Reversed number: %d",rev);
	}
	else
		printf("invalid");
}
