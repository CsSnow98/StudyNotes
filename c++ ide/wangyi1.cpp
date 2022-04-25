#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<char>> arr(2 * n - 1, vector<char>(2 * n - 1, ' '));

    for (int i = 0; i < n - 1; i ++)
    {
        arr[i][0] = '*';
        arr[i][i] = '*';
    }
    for (int j = 0; j < n; j ++) arr[n - 1][j] = '*';
    for (int i = n; i < 2 * n - 2; i ++)
    {
        arr[i][n - 1] = '*';
        arr[i][n - 2 - i + n] = '*';
    }
    for (int j = 0; j < n; j ++) arr[2 * n - 2][j] = '*';
    for (int i = 0; i < 2 * n - 1; i ++)
    {
        for (int j = 0; j < n; j ++)
        {
            arr[2 * n - 2 - i][2 * n - 2 - j] = arr[i][j];
        }
    }
    for (int i = 0; i < 2 * n - 1; i ++) arr[i][n - 1] = '*';
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}