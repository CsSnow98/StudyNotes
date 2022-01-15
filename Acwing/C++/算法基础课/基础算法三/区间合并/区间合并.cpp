#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int, int> PII;
vector<PII> a;

void merge(vector<PII> &a)
{
    vector<PII> res;
    sort(a.begin(), a.end());
    int l = -2e9, r = -2e9;
    for (auto v : a)
    {
        if (r >= v.first)
        {
            r = max(r, v.second);
        }
        else
        {
            if (l != -2e9)
            {
                res.push_back({l, r});
            }
            l = v.first, r = v.second;
        }
    }
    if (l != -2e9)
        res.push_back({l, r});

    a = res;
}

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int l, r;
        scanf("%d%d", &l, &r);
        a.push_back({l, r});
    }
    merge(a);
    cout << a.size() << endl;
    return 0;
}