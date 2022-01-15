#include <cstdio>

using namespace std;
const int N = 100010;
int e[N], ne[N];
int idx, head;

void init()
{
    head = -1;
    idx = 0;
}

void add_head(int x)
{
    e[idx] = x;
    ne[idx] = head;
    head = idx;
    idx++;
}

void add(int k, int x)
{
    e[idx] = x;
    ne[idx] = ne[k - 1];
    ne[k - 1] = idx;
    idx++;
}

void del(int k)
{
    if (k != 0)
        ne[k - 1] = ne[ne[k - 1]];
    else
        head = ne[head];
}

int main()
{
    int m;
    scanf("%d ", &m);
    init();
    int i = 0;
    while (m--)
    {
        char c;
        int k, x;
        scanf("%c", &c);
        if (c == 'H')
        {
            scanf("%d ", &x);
            add_head(x);
        }
        else if (c == 'I')
        {
            scanf("%d %d ", &k, &x);
            add(k, x);
        }
        else if (c == 'D')
        {
            scanf("%d ", &k);
            del(k);
        }
    }
    for (int i = head; i != -1; i = ne[i])
    {
        printf("%d ", e[i]);
    }

    return 0;
}