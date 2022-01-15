#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
const int N = 100010;

int stk[N], tt;

void push(int x)
{
    stk[++tt] = x;
}

void pop()
{
    if (tt != -1)
        tt--;
}

bool empty()
{
    if (tt == -1)
        return true;
    else
        return false;
}

int query()
{
    return stk[tt];
}

int main()
{
    int m;
    scanf("%d", &m);
    tt = -1;
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