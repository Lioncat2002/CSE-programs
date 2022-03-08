#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter rows: \n");
    scanf("%d", &N);

    for(i=N; i>=1; i--)
    {
        for(j=i; j<N; j++)
        {
            printf(" ");
        }

        for(j=1; j<=(i*2)-1; j+=2)
        {
            printf("%d", j);
        }

        for(j=(i-1)*2-1; j>=1; j-=2)
        {
            printf("%d", j);
        }

        printf("\n");
    }
    for(i=2; i<=N; i++)
    {
        for(j=0; j<N; j++)
        {
            printf(" ");
        }

        for(j=1; j<=(i*2)-1; j+=2)
        {
            printf("%d", j);
        }

        for(j=(i-1)*2-1; j>=1; j-=2)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}