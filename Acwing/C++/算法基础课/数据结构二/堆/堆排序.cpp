#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

const int N = 100010;

int heap[N], cnt;

void down(int u)
{
    int t = u;
    if (2 * u <= cnt && heap[2 * u] < heap[t])
        t = 2 * u;
    if (2 * u + 1 <= cnt && heap[2 * u + 1] < heap[t])
        t = 2 * u + 1;
    if (u != t)
    {
        swap(heap[u], heap[t]);
        down(t);
    }
}

int main()
{

    int m, n;
    scanf("%d%d", &n, &m);
    cnt = n;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d ", &heap[i]);
    }

    for (int i = n / 2; i; i--) //因为是down 所以要从下往上
    {
        down(i);
    }

    while (m--)
    {
        printf("%d ", heap[1]);
        heap[1] = heap[cnt--];
        down(1);
    }
    return 0;
}