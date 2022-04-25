#include <bits/stdc++.h>

using namespace std;

void split(string s, map<string, bool>& mp, map<string, int>& mp2, vector<vector<string>>& arr, int index)
{
    // cout << 1;
    s.push_back(' ');
    string str = "";
    for(const auto & v : s)
    {
        if (v != ' ') str += v;
        else
        {
            mp[str] = false;
            mp2[str] = index;
            arr[index].push_back(str);
            str = "";
        }
    }
}

int main()
{
    map<string, bool> mp;
    map<string, int> mp2;
    string first;
    cin >> first;
    // cin.get();
    int m;
    cin >> m;
    cin.get();
    vector<vector<string>> arr(m + 1, vector<string>());
    for (int i = 1; i <= m; i ++)
    {
        string s;
        getline(cin, s);
        // cout << s;
        split(s, mp, mp2, arr, i);
        cin.get();
    }
    // queue<string> q;
    // q.push(first);
    // int res = 0;
    // while (!q.empty())
    // {
    //     cout << 1;
    //     string s2 = q.front();
    //     q.pop();
    //     if (mp[s2] == false) 
    //     {
    //         mp[s2] = true;
    //         res++;
    //     }
    //     else continue;
    //     for (const auto & v : arr[mp2[s2]])
    //     {
    //         q.push(v);
    //     }
    // }
    // cout << res;
    return 0;
}