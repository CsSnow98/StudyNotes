#include <iostream>
#include <cstdio>

using namespace std;
const int N=1e5+10;
int a[N],s[N];
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        s[i] = a[i] + s[i - 1];
    }
    while (m--)
    {
        int l, r;
        cin >> l >> r;
        cout << s[r] - s[l - 1] << endl;
    }

    return 0;
}