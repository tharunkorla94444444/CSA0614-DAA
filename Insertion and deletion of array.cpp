 #include<stdio.h>
int main()
{
	int n,a[30],b[n+1],i,o,in,el,p;
	printf("number of elements you are going to enter ::");
	scanf("%d",&n);
	printf("enter the numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" 1.insertion.\n");
	printf(" 2.deletion.\n");
	printf(" 3.display.\n");
	printf("enter the operation you want::");
	scanf("%d",&o);
	switch(o)
	{
		case 1:
			printf("you choosed insertion..");
			printf("enter the element:");
			scanf("%d",&el);
			printf("\nenter the position:");
			scanf("%d",&p);
			if(p<=n)
			{
				for(i=0;i<p;i++)
				{
					b[i]=a[i];
				}
				for(i=p;i<=n;i++)
				{
					b[i]=a[i-1];
				}
				b[p]=el;
			}
			else printf("Invalid.");
			printf("Resultant array after operation:");
			for(i=0;i<=n;i++)
			{
				printf("%d,",b[i]);
			}
			break;
		case 2:
			printf("you choosed deletion..\n");
			printf("enter the position:");
			scanf("%d",&p);
			if(p<=n)
			{
				for(i=0;i<p;i++)
		  		{
					b[i]=a[i];
				}
				for(i=p;i<n;i++)
				{
					b[i]=a[i+1];
				}
			}
			else printf("Invalid.");
			printf("Resultant array after operation:");
			for(i=0;i<n-1;i++)
			{
				printf("%d,",b[i]);
			}
			break;
		case 3:
			printf("you choosed display..\n");
			printf("enter the position you want to display::");
			scanf("%d",&in);
			printf("a[%d] = %d",in,a[in]);
			break;
		
	}
	return 0;
}
