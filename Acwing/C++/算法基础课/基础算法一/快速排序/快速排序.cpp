#include <iostream>
#include <cstdio>

const int N = 100010;
using namespace std;

void quick_sort(int n[], int l, int r)
{
    if (l >= r)
        return;
    int x = n[l + r >> 1];
    int i = l - 1, j = r + 1;
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

    quick_sort(n, l, j); // 用j不可取q[r];
    quick_sort(n, j + 1, r);
}

int main()
{
    int z;
    int n[N];
    cin >> z;
    for (int i = 0; i < z; i++)
    {
        scanf("%d ", &n[i]);
    }

    quick_sort(n, 0, z - 1);

    for (int i = 0; i < z; i++)
    {
        printf("%d ", n[i]);
    }

    return 0;
}