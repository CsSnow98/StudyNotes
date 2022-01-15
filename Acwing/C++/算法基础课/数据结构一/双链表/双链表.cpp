#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;
const int N = 100010;
int e[N], r[N], l[N];
int idx;

void insert(int a, int x)
{
    e[idx] = x;
    l[idx] = a;
    r[idx] = r[a];
    l[r[a]] = idx;
    r[a] = idx;
    idx++;
}

void del(int k)
{
    l[r[k]] = l[k];
    r[l[k]] = r[k];
}

int main()
{
    int m;
    scanf("%d ", &m);
    r[0] = 1, l[1] = 0; //初始化0左端点，1右端点
    idx = 2;
    while (m--)
    {
        string op;
        int k, x;
        cin >> op;
        if (op == "L")
        {
            scanf("%d ", &x);
            insert(0, x);
        }
        else if (op == "R")
        {
            scanf("%d ", &x);
            insert(l[1], x);
        }
        else if (op == "IL")
        {
            scanf("%d %d ", &k, &x);
            insert(l[k + 1], x);
        }
        else if (op == "IR")
        {
            scanf("%d %d ", &k, &x);
            insert(k + 1, x);
        }
        else
        {
            scanf("%d ", &k);
            del(k + 1);
        }
    }
    for (int i = r[0]; i != 1; i = r[i])
    {
        printf("%d ", e[i]);
    }

    return 0;
}