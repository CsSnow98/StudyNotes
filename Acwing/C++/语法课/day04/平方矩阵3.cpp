#include <cstdio>

int main ()
{
    while (1)
    {
        int n;
        scanf("%d\n",&n);
        int N[n][n];
        if(n==0) break;
        N[0][0] = 0;
        for (int j = 1; j < n; j++)
        {
            N[0][j]=2 * N[0][j-1];
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                N[i][j]=2 * N[i-1][j];
            }
        }    
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ",N[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}