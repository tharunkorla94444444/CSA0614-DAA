#include <stdio.h>
int main()
{
	int a[100], n, i, j, p, swap;
	printf("Enter number of elements");
	scanf("%d", &n);
	printf("\nEnter %d Numbers", n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for(i = 0; i < n - 1; i++)
	{
		p=i;
		for(j = i + 1; j < n; j++)
		{
			if(a[p] > a[j])
				p=j;
		}
		if(p != i)
		{
			swap=a[i];
			a[i]=a[p];
			a[p]=swap;
		}
	}
	printf("Sorted Array:");
	for(i = 0; i < n; i++)
		printf("%d", a[i]);
}
