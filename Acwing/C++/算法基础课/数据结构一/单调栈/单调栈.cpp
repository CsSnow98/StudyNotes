#include <iostream>
#include <cstdio>

using namespace std;

const int N = 100010;

int stk[N], tt;
int main()
{
    int n;
    scanf("%d", &n);
    tt = 0;
    for (int i = 1; i <= n; i++)
    {
        int t;
        scanf("%d", &t);
        while (tt && stk[tt] >= t)
        {
            tt--;
        }
        if (tt)
            printf("%d ", stk[tt]);
        else
            printf("-1 ");
        stk[++tt] = t;
    }

    return 0;
}