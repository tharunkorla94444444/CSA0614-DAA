 #include <stdio.h>  
int Search(int a[], int beg, int end, int t)    
{    
    int mid;    
    if(end >= beg)     
    {        mid = (beg + end)/2;    
  
        if(a[mid] == t)    
        {                 
            return mid+1;    
        }      
        else if(a[mid] < t)     
        {  
            return Search(a, mid+1, end, t);    
        }     
        else     
        {  
            return Search(a, beg, mid-1, t);    
        }          
    }    
    return -1;     
}   
int main()
{  
	int res,i,t,n,a[30];
	printf("number of elements you are going to enter ::");
	scanf("%d",&n);
	printf("enter the required target number::");
	scanf("%d",&t);
	printf("enter the numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}    
  	res = Search(a, 0, n-1, t);
 	printf("The elements of the array are - ");  
  	for (i=0;i<n;i++)  
 		{
  			printf("%d ", a[i]);
		}
  	printf("\nElement to be searched is - %d", t);  
  	if (res == -1)  
  		printf("\nElement is not present in the array");  
  	else  
  		printf("\nElement is present at %d position of array", res);  
  	return 0;  
}  
