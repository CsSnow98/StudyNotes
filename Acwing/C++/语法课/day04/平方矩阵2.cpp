#include <cstdio>

int main ()
{
    while (1)
    {
        int n;
        scanf("%d\n",&n);
        int N[n][n];
        if(n==0) break;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                N[i][j]=j+1;
                N[j][i]=N[i][j];
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ",N[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    

    return 0;
}

/*利用偏移量
#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
    int m, n;
    cin >> n >> m;
    int a[100][100] = {0};
    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};
    int x = 0, y = 0, d = 0;
    for(int i = 1; i <= m * n; i++)
    {
        a[x][y] = i;
        int q = x + dx[d];
        int o = y + dy[d];
        if(q < 0 || q >= n || o < 0 || o >= m || a[q][o]){
            d = (d + 1) % 4;
            q = x + dx[d];
            o = y + dy[d];
        }
        x = q;
        y = o;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
*/