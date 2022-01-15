#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
const int N = 100010;

int que[N], tt, hh;

void push(int x)
{
    que[tt++] = x;
}

void pop()
{
    if (hh <= tt)
        hh++;
}

bool empty()
{
    if (tt == hh)
        return true;
    else
        return false;
}

int query()
{
    return que[hh];
}

int main()
{
    int m;
    scanf("%d", &m);
    tt = 0 , hh = 0;
    while (m--)
    {
        string op;
        cin >> op;
        if (op == "push")
        {
            int x;
            scanf("%d ", &x);
            push(x);
        }
        else if (op == "pop")
        {
            pop();
        }
        else if (op == "query")
        {
            printf("%d\n", query());
        }
        else
        {
            if (empty())
                printf("YES\n");
            else
                printf("NO\n");
        }
    }

    return 0;
}