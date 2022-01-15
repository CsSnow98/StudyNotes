#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

vector<int> a, b;

int main()
{

    int m, n, x, v;
    cin >> m >> n >> x;
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &v);
        a.push_back(v);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v);
        b.push_back(v);
    }
    int i, j;
    for (i = 0, j = n - 1; i < m; i++)
    {
        while (a[i] + b[j] > x && j >= 0)
        {
            j--;
        }
        if (a[i] + b[j] == x)
        {
            break;
        }
    }
    cout << i << " " << j << endl;
    return 0;
}