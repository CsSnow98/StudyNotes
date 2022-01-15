#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;
const int N = 100010;
int h[N], e[N], ne[N], idx;

void insert(int x)
{
    int k = (x % N + N) % N;
    e[idx] = x;
    ne[idx] = h[k];
    h[k] = idx++;
}

bool query(int x)
{
    int k = (x % N + N) % N;
    for (int i = h[k]; i != -1; i = ne[i])
    {
        if (e[i] == x)
            return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    memset(h, -1, sizeof h);
    while (n--)
    {
        int x;
        char op[2];
        cin >> op >> x;
        if (op[0] == 'I')
        {
            insert(x);
        }
        else
        {
            if (query(x))
                puts("Yes");
            else
                puts("No");
        }
    }
    return 0;
}