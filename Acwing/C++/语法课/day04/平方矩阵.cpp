#include <cstdio>
#include <cmath>
int main()
{
    int n = -1;
    int M[n][n];
    
    while(n != 0)
    {
        scanf("%d",&n);
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                M[i][j] = i+1;
                M[j][i] = i+1;

            }

        }
        for (int i = n-1; i>0 ; i--)
        {
            for (int j = i; j > 0; j--)
            {
                M[i][j] = M[n-1-j][n-1-i];
                
            }
            
        }
                for (int i = 0; i <n ; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ",M[i][j]);
                
            }
            printf("\n");
        }
    }
}

//根据元素到上下左右的最小距离