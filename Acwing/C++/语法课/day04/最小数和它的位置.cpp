#include <cstdio>

int main ()
{
    int n = 0;
    int mini=0;
    scanf("%d\n",&n);
    int N[n] = {};
    scanf("%d ",&N[0]);
    // printf("%d ",N[0]);
    for (int i = 1; i < n; i++)
    {
        
        /* code */
        scanf("%d ",&N[i]);
        // printf("%d ",N[i]);
        if (N[i] < N[0])
        {
            mini = i;
            N[0] = N[i];

            /* code */
        }
        
    }
    printf("Minimum value: %d\nPosition: %d",N[0],mini);
    return 0 ;
    
}