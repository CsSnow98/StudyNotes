#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, p, x;
    cin >> n >> p >> x;
    // cout << n << p << x << endl;
    // cin.get();
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        arr[i] = t;
        // cout << arr[i] << " ";
    }
    vector<int> sum(0, n);
    for (int i = 0; i < n; i ++)
    {
        for (int j = 0; j < n; j ++)
        {
            if (j != i) sum[i] += arr[j];
        }
    }
    int res = 0;
    // for (int i = 0; i < n; i ++)
    // {
    //     for (int k = 1; k <= p; k ++)
    //     {
    //         if (k != arr[i] && (sum[i] + k) % x == 0) res += 1;
    //     }
    // }
    cout << res;
    return 0;
}