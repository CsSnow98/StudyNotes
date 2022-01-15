#include <iostream>
#include <cstdio>

const int N = 100010;

using namespace std;

void guibing_sort(int q[], int l, int r)
{
    if (l >= r)
        return;
    int mid = (l + r) >> 1;

    guibing_sort(q, l, mid);
    guibing_sort(q, mid + 1, r);

    int i = l, j = mid + 1;
    int tem[r - l + 10] = {0};
    int k = 0;
    // cout << "mid=" << mid <<endl;
    while (i <= mid && j <= r)
    {
        if (q[i] <= q[j])
        {
            tem[k] = q[i];
            // cout << "-"<<tem[k] << "-"<<endl;
            i++, k++;
        }
        else
        {
            tem[k] = q[j];
            // cout << "--"<<tem[k] << "--"<<endl;
            j++, k++;
        }
    }
    while (i <= mid)
    {
        tem[k] = q[i];
        // cout << "---"<<tem[k] << "---"<<endl;
        i++, k++;
    }
    while (j <= r)
    {

        tem[k] = q[j];
        // cout << "----"<<tem[k] << "----"<<endl;
        j++, k++;
    }

    for (int i = l, j = 0; i <= r; i++, j++)
    {
        q[i] = tem[j];
        // cout << "-----"<<q[i] << "-----"<<endl;
    }
}

int main()
{
    int n;
    cin >> n;
    int q[N];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &q[i]);
    }

    guibing_sort(q, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", q[i]);
    }
}

//代码优化

#include <iostream>
#include <cstdio>

const int N = 100010;

using namespace std;

void guibing_sort(int q[], int l, int r)
{
    if (l >= r)
        return;
    int mid = (l + r) >> 1;
    guibing_sort(q, l, mid);
    guibing_sort(q, mid + 1, r);

    int i = l, j = mid + 1, k = 0;
    int tem[r-l+1] = {0};
    while (i <= mid && j <= r)
    {
        if (q[i] <= q[j])
        {
            tem[k++] = q[i++];
        }
        else
        {
            tem[k++] = q[j++];
        }
    }
    while (i <= mid)
        tem[k++] = q[i++];
    while (j <= r)
        tem[k++] = q[j++];
    for (int i = l, j = 0; i <= r; i++, j++)
    {
        q[i] = tem[j];
    }
}

int main()
{
    int n;
    cin >> n;
    int q[N];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &q[i]);
    }

    guibing_sort(q, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", q[i]);
    }
}