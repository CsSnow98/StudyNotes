#include <iostream>
#include <cstdio>

using namespace std;
const int N = 100010;

int G[N];

int find(int x)
{
    if (G[x] != x)
        G[x] = find(G[x]);
    return G[x];
}

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        G[i] = i;
    while (m--)
    {
        char op[2];
        int a, b;
        scanf("%s%d%d", op, &a, &b);
        if (*op == 'M')
        {
            G[find(a)] = find(b);
        }
        else
        {
            if (find(a) == find(b))
                printf("Yes\n");
            else
                printf("No\n");
        }
    }

    return 0;
}