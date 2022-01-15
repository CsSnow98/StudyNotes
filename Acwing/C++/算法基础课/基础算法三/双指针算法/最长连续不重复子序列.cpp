#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;
const int N = 100010;
vector<int> a;
int b[N];
int main()
{

    int n, v, res;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v);
        a.push_back(v);
    }
    res = 0;
    for (int i = 0, j = 0; i < n; i++)
    {
        b[a[i]]++;
        while (b[a[i]] > 1)
        {
            b[a[j]]--;
            j++;
        }
        res = max(res, i - j + 1);
    }
    cout << res << endl;

    return 0;
}