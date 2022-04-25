#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.get();
    string s;
    getline(cin, s);
    int res = INT_MAX;
    for (int i = 0; i < s.length(); i ++)
    {
        int a = 0;
        int f = 0;
        for (int j = 0; j < i; j++){
            if (s[j] == '0')
            {
                a += j + 1;
            }
        }
        for (int j = i; j < s.length(); j++)
        {
            if (s[j] == '1')
            {
                f += j + 1;
            }
        }
        res = min(res, abs(a - f));
    }
    cout << res;
    return 0;
}