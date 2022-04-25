#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.get();
    vector<string> arr;
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        arr.push_back(s);
    }
    vector<int> vec(arr[0].length(), 0);
    for (int i = 0; i < arr[0].length(); i++)
    {
        for (int j = 0; j < n; j++)
        {
            // cout << arr[j][i] << endl;
            vec[i] *= 10;
            vec[i] += int(arr[j][i] - '0');
        }
    }
    sort(vec.begin(),vec.end());
    for (int i = 0; i < arr[0].length(); i ++)
    {
        cout << vec[i] << " ";
    }
    return 0;
}