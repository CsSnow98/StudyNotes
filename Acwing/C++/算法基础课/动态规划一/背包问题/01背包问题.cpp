// #include <iostream>
// #include <algorithm>

// using namespace std;
// const int N = 1010;

// int v[N],w[N];
// int f[N][N];

// int main(){
//     int m,n;
//     cin >> m >> n;
//     for (int i = 1; i <= m; i++)
//     {
//         cin >> v[i] >> w[i];        
//     }
//     for (int i = 1; i <= m; i++)
//     {
//         for (int j = 0; j <= n; j++)
//         {
//             f[i][j] = f[i-1][j];
//             if(j>=v[i]) f[i][j] = max(f[i][j],f[i-1][j-v[i]]+w[i]);
//         }
//     }
    

//     cout << f[m][n] <<endl;

//     return 0;
// }

//优化后

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;
const int N = 1010;

int v[N],w[N];
int f[N];

int main(){
    int m,n;
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    {
        cin >> v[i] >> w[i];        
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = n; j >= v[i]; j--)
        {
            f[j] = max(f[j],f[j-v[i]]+w[i]);
        }
    }
    

    cout << f[n] <<endl;

    return 0;
}