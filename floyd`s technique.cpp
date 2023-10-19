#include <stdio.h>
#define V 4
#define INF 99999
void printSolution(int dist[][V]);
void floydWarshall(int dist[][V])
{
    int i, j, k;
    for (k = 0; k < V; k++)
	{
        for (i = 0; i < V; i++)
		{
            for (j = 0; j < V; j++)
			{ 
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
    printSolution(dist);
}
 
void printSolution(int dist[][V])
{
    printf(
        "The following matrix shows the shortest distances"
        " between every pair of vertices \n");
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (dist[i][j] == INF)
                printf("%7s", "INF");
            else
                printf("%7d", dist[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int graph[V][V],a,b;
    printf("enter the input matrix=\n");    
    for(a=0;a<V;a++)    
    {    
		for(b=0;b<V;b++)    
        {    
             scanf("%d",&graph[][]);  
         }    
    }
    floydWarshall(graph);
    return 0;
}
