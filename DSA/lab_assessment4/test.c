#include <stdio.h>
#include <stdlib.h>

// BFS
void BFS(int n, int a[10][10], int source, int visited[10])
{
    int queue[10], front = -1, rear = -1, i, j;
    queue[++rear] = source;
    visited[source] = 1;
    while (front != rear)
    {
        i = queue[++front];
        printf("%d ", i);
        for (j = 1; j <= n; j++)
        {
            if (a[i][j] == 1 && visited[j] == 0)
            {
                queue[++rear] = j;
                visited[j] = 1;
            }
        }
    }
}

int main()
{
    int n, a[10][10], i, j, source, visited[10];
    printf("Enter the number of vertices:");
    scanf("%d", &n);
    printf("Enter the adjacency matrix: \n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the source vertex: ");
    scanf("%d", &source);
    for (i = 1; i <= n; i++)
    {
        visited[i] = 0;
    }
    printf("The BFS traversal is: ");
    BFS(n, a, source, visited);
    return 0;
}