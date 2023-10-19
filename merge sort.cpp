#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,n,j,k,temp,m;
    	printf("Enter the size of the first array: ");
    	scanf("%d", &n);
    	printf("Enter the size of the second array: ");
    	scanf("%d", &k);
    	int a[n],b[k];
    	printf("Enter the elements of the first array: \n");
    	for (i = 0; i < n; i++)
    		scanf("%d", &a[i]);
    	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}}}
    
	printf("Enter the elements of the second array: \n");
    	for (j = 0; j < k; j++)
    		scanf("%d", &b[j]);
    	for(i=0;i<k;i++){
		for(j=i+1;j<k;j++){
			if(b[i]>b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}}}
    
	int c[n+k];
    	i = j = 0;
    	for (m=0;m<n+k;m++)
    	{
    		if(i<n && j<k)
		{
			if(a[i]<b[j])
			{
				c[m]=a[i];
				i++;
			}
			else
			{
				c[m]=b[j];
				j++;
			}
		}
		else if (i < n)
        	{
            		c[m] = a[i];
            		i++;
        	}
        	else
        	{
            		c[m] = b[j];
            		j++;
        	}
	}
    printf("The merged array is: \n");
    for (m=0;m<n+k;m++)
    {
        printf("%d ", c[m]);
    }
    printf("\n");
}
