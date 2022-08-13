#include <stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int matrix[m][n];
    int transpose[10][10];
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("a[%d][%d]",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            transpose[j][i]=matrix[i][j];
        }
    }
    printf("Matrix: ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("transpose: ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d ",transpose[i][j]);
        }
        printf("\n");
    }
    
    
    
}