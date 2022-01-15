// #include <iostream>
// #include <algorithm>

// using namespace std;

// const int N = 12000,M =2010;

// int n,m;
// int v[N],w[N];
// int f[N][M];

// int main(){
//     cin >> n >> m;
//     int cnt = 0;
//     while(n--){
//         int a,b,c;
//         cin >> a >> b >>c;
//         int k = 1;
//         while(k<=c){
//             cnt++;
//             v[cnt] = k * a;
//             w[cnt] = k * b;
//             c -= k;
//             k *= 2;
//         }
//         if(c>0){
//             cnt++;
//             v[cnt] = c*a;
//             w[cnt] = c*b;
//         }
//     }
//     n = cnt;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 0; j <= m; j++)
//         {
//             f[i][j] = f[i-1][j];
//             if(j>=v[i]) f[i][j]=max(f[i][j],f[i-1][j-v[i]]+w[i]);
//         }

//     }

//     cout << f[n][m] << endl;
//     return 0;
// }

//优化版

#include <iostream>
#include <algorithm>

using namespace std;

const int N = 12000, M = 2010;

int n, m;
int v[N], w[N];
int f[M];

int main()
{
    cin >> n >> m;
    int cnt = 0;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int k = 1;
        while (k <= c)
        {
            cnt++;
            v[cnt] = k * a;
            w[cnt] = k * b;
            c -= k;
            k *= 2;
        }
        if (c > 0)
        {
            cnt++;
            v[cnt] = c * a;
            w[cnt] = c * b;
        }
    }
    n = cnt;
    for (int i = 1; i <= n; i++)
    {
        for (int j = m; j >= v[i]; j--)
        {
            f[j] = max(f[j], f[j - v[i]] + w[i]);
        }
    }

    cout << f[m] << endl;
    return 0;
}