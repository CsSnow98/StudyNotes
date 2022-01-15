#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;
const int N = 100010;
vector<int> a,b;
int main()
{

    int n, m, v;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v);
        a.push_back(v);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &v);
        b.push_back(v);
    }
    int i, j;
    for (i = 0, j = 0; i < n && j < m; j++)
    {
        // cout << "j: " <<j <<endl;
        if(a[i] == b[j]){
            // cout << "i: " <<i <<endl;
            i++;

        }       
    }
    if(i==n) cout << "Yes" <<endl;
    else cout << "No" <<endl;

    return 0;
}