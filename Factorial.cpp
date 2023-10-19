#include<stdio.h>
int fact(int n);
int main()
{
	int n;
	printf("enter the number ::");
	scanf("%d",&n);
	printf("factorial of the given number :: %d",fact(n));
}
 fact(int n)
 {
 	if(n>=1)
 		return n*fact(n-1);
 	else
 		return 1;
 }
