#include <iostream>
#include <cstdio>

const int N = 100010;

using namespace std;

void quick_sort(int n[], int l, int r)
{
    if (l >= r)
        return;
    int i = l - 1, j = r + 1, x = n[l + r >> 1];
    while (i < j)
    {
        do
            i++;
        while (n[i] < x);
        do
            j--;
        while (n[j] > x);
        if (i < j)
            swap(n[i], n[j]);
    }
    quick_sort(n, l, j), quick_sort(n, j + 1, r);
}

int main()
{
    int n, k;
    cin >> n >> k;
    int N[N];
    for (int i = 0; i < n; i++)
    {
        cin >> N[i];
    }

    quick_sort(N, 0, n - 1);

    cout << N[k - 1];

    return 0;
}