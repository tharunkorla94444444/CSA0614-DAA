#include <stdio.h>
 
int max(int a, int b) { return (a > b)? a : b; }
// Returns the maximum value that can be put in a knapsack of capacity W
int knapsack(int W, int wt[], int val[], int n)
{
   int i, w;
   int K[n+1][W+1];
 
   // Build table K[][] in bottom up manner
   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }
 
   return K[n][W];
}
 
int main()
{
    int W,n,i;
    printf("number of values:");
    scanf("%d",&n);
    int val[n],wt[n];
    printf("enter the max weight: ");
    scanf("%d",&W);
    printf("enter weights::");
    for(i=0;i<n;i++)
    	scanf("%d",&wt[i]);
    	
    printf("enter profits::");
    for(i=0;i<n;i++)
    	scanf("%d",&val[i]);	
    //int n = sizeof(val)/sizeof(val[0]);
    printf("\nValue = %d", knapsack(W, wt, val, n));
    return 0;
}
