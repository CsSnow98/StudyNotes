#include <cstdio>
#include <cstring>
#include <cmath>




int main ()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int M[m][n];
    memset(M,0,sizeof(M));
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         printf("%d ", M[i][j]);/* code */
    //     }
    //     printf("\n");/* code */
    // }
    int k = 1;
    int v = 0;
    int c = (m+n+abs(m-n))/2;
    while (1)
    {
        
        for (int i = 0; i < n; i++)
        {
            if(M[v][i] == 0) 
            {
                M[v][i] = k ;
                k++;
            }
            // printf("%d ",M[0][i]);
        }
        // printf("--%d--",k);
        for (int i = 0; i < m; i++)
        {
            //  printf("**%d**",k);
            if(M[i][n-1-v] == 0)  
            {
                M[i][n-1-v] = k ;
                k++;
            }
            // printf("%d ",M[i][n-1]);
        }
        for (int i = n-1; i >= 0; i--)
        {
            if(M[m-1-v][i] == 0) 
            {
               M[m-1-v][i] = k ;
                k++;
            }
            // printf("%d ",M[n-1][i]);
        }
        for (int i = m-1; i >= 0; i--)
        {
            if(M[i][v] == 0) 
            {
                M[i][v] = k ;
                k++;
            }    
            // printf("%d ",M[0][i]);
        }
        // printf("--%d--\n",v);
        if(((v+1)>m/2)&&((v+1)>n/2) == 1 ) break; //注意int除法是取整的
        v++;
    }
    // printf("\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", M[i][j]);/* code */
        }
        printf("\n");/* code */
    }
    
    return 0;
}