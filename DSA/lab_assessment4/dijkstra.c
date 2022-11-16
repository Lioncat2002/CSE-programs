/*
0 2 0 7 0 12 2 0
2 0 1 4 3 0 5  0
0 1 0 0 4 0 4  0
7 4 0 0 1 0 0  5
0 3 4 1 0 0 0  7
12 0 0 0 0 0 0 3
2 5 4 0 0 0 0  0
0 0 0 5 7 3 0  0
*/
#include <stdio.h>
#define INF 999
void dijikstra(int G[10][10], int n, int startnode);
void main()
{
    int G[10][10], j, n, startnode;
    printf("\nEnter the number of vertices: ");
    scanf("%d", &n);
    printf("\n Enter the adjacency matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &G[i][j]);
        }
    }
    printf("\nEnter the starting node: ");
    scanf("%d", &startnode);
    dijikstra(G, n, startnode);
}
void dijikstra(int G[10][10], int n, int startnode)
{
    int cost[10][10], distance[10], pred[10];
    int visited[10], count, mindistance, nextnode, i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (G[i][j] == 0)
                cost[i][j] = INF;
            else
                cost[i][j] = G[i][j];
    for (i = 0; i < n; i++)
    {
        distance[i] = cost[startnode][i];
        pred[i] = startnode;
        visited[i] = 0;
    }
    distance[startnode] = 0;
    visited[startnode] = 1;
    count = 1;
    while (count < n - 1)
    {
        mindistance = INF;
        for (i = 0; i < n; i++)
            if (distance[i] < mindistance && !visited[i])
            {
                mindistance = distance[i];
                nextnode = i;
            }
        visited[nextnode] = 1;
        for (i = 0; i < n; i++)
            if (!visited[i])
                if (mindistance + cost[nextnode][i] < distance[i])
                {
                    distance[i] = mindistance + cost[nextnode][i];
                    pred[i] = nextnode;
                }
        count++;
    }
    for (i = 0; i < n; i++)
    {
        if (i != startnode)
        {
            printf("\nDistance of node%d = %d", i, distance[i]);
            printf("\nPath = %d", i);
            j = i;
            do
            {
                j = pred[j];
                printf("<-%d", j);
            } while (j != startnode);
        }
    }
}