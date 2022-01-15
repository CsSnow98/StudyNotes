#include <iostream>
#include <cstdio>
using namespace std;
const int N = 100010;
unsigned long num = 0;


void nishudui(int q[], int l, int r)
{
    if (l >= r)
        return ;
    int mid = (l + r) >> 1;

    nishudui(q, l, mid);
    nishudui(q, mid + 1, r);

    int i = l, j = mid + 1,k = 0;
    int tem[r-l+1] = {0};
    while (i<=mid&&j<=r)
    {
        if (q[i] <= q[j])
        {
            tem[k++] = q[i++];
        }else{
            tem[k++] = q[j++];
            num += (mid - i +1 );
        }
    }
    while (i<=mid)
    {
        tem[k++] = q[i++];
    }
    while(j<=r)
    {
        tem[k++] = q[j++];
    }
    for (int i = l,j=0; i <=r; i++,j++)
    {
        q[i] = tem[j] ;
        // cout << q[i] << " ";
    }
    // cout << "------" <<endl; 

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
    nishudui(q, 0, n - 1);
    cout << num;    
}