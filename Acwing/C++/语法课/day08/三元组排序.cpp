#include <iostream>
#include <cstdio>
#include <algorithm>
const int N = 10010;
using namespace std;

struct data
{
    int x;
    double y;
    string z;
    bool operator<(const data &t) const
    {
        return x < t.x;
    }
} a[N];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].x >> a[i].y >> a[i].z;
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        printf("%d %.2lf %s\n", a[i].x, a[i].y, a[i].z.c_str());
    }
}