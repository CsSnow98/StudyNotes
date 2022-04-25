#include <bits/stdc++.h>

using namespace std;

const int N = 10010;

int n, m;

int dj(vector<vector<int>>& g, vector<int>& dist, vector<bool>& st)
{
    dist[1] = 0;
    for (int i = 0; i < n - 1; i ++)
    {
        int t = -1;
        for (int j = 1; j <= n; j ++)
        {
            if (!st[j] && (t == -1 || dist[t] > dist[j])) t = j;
        }
        for (int j = i; j <= n; j ++)
        {
            dist[j] = min(dist[j], dist[t] + g[t][j]);
        }
        st[t] = true;
    }
    if (dist[n] == 0x3f3f3f3f) return -1;
    return dist[n];
}

int main()
{
    scanf("%d%d", &n, &m);
    vector<vector<int>> g(n, vector<int>(n, 0x3f3f3f3f));
    vector<int> dist(n, 0x3f3f3f3f);
    vector<bool> st(n, false);
    while (m --)
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        g[a][b] = min(g[a][b], c);
    }
    printf("%d\n", dj(g, dist, st));
    return 0;
}