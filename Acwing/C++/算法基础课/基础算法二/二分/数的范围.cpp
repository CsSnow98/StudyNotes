#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

const int N = 100010;
int n;
int a[N];

int main()
{
    int q;
    cin >> n >> q;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    while (q--)
    {
        int k;
        cin >> k;
        int l = 0, r = n - 1;
        while (l < r)
        {
            int mid = l + r >> 1;
            if (a[mid] >= k)
                r = mid;
            else
                l = mid + 1;
        }

        if (a[l] != k)
            cout << "-1 -1" << endl;
        else
        {
            cout << l << " ";
            l = 0, r = n - 1;
            while (l < r)
            {
                int mid = l + r + 1 >> 1;
                if (a[mid] <= k)
                    l = mid;
                else
                    r = mid - 1;
            }
            cout << l << endl;
        }
    }

    return 0;
}