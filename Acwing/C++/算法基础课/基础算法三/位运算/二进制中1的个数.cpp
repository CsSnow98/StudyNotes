#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    int n, v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int res = 0;
        scanf("%d", &v);
        // cout << "v:" << v << endl;
        while (v)
        {
            if (v & 1)
            {
                res++;
            }
            v = v >> 1;
        }
        printf("%d ", res);
    }

    return 0;
}