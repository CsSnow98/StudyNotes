#include <cstdio>

int main()
{
    long Fib[61] = {0};
    int t = 0;
    int n = 0;
    scanf("%d\n",&t);
    Fib[0] = 0;
    Fib[1] = 1;
    
    for (int i = 0; i < t; i++)
    {
        scanf("%d\n",&n);
        for (int j = 2; j <= n; j++)
        {
            Fib[j] = Fib[j-1] + Fib[j-2];
        }/* code */
        printf("Fib(%d) = %ld\n",n,Fib[n]);
    }
    return 0;
}

//小心整数溢出