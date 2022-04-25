#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int res = 0;
    while (n)
    {
       if ((n & 15) > 9) res++;
       n = n >> 4; 

    }
    cout << res << endl;
    return 0;
}