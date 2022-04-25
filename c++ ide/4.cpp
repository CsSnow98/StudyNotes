#include <bits/stdc++.h>

using namespace std;

int zeroNum(int res, int sum)
{
    res = 0;
    string s = to_string(sum);
    cout << s;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == '0') res++;
        else break;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    arr.push_back(0);
//     cin.get();
    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;
        arr.push_back(t);
    }
    for (int i = 1; i <= n; i ++)
    {
        for (int j = i; j <= n; j ++)
        {
            int sum = 1;
            for (int k = i; k <= j; k ++) sum *= arr[k];
            res += zeroNum(0, sum);
        }
    }
    cout << res;
}