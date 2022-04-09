#include <bits/stdc++.h>

using namespace std;

void cptype(int map[], string s)
{
    for (const auto & v : s)
    {
        map[v - 'a']++; 
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    cin.get();
    string s;
    getline(cin, s);
    int res = 0;
    int map[26] = {0};
    cptype(map, s);
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i; j < s.size(); j++)
        {
            int map2[26] = {0};
            cptype(map2, s.substr(i, j - i + 1));
            int type = 0;
            for (int a = 0; a < 26; a++)
            {
                if (map[a] - map2[a] > 0) type++;
            }
            if (type >= k) res++;
        }
    }
    cout << res << endl;
    return 0;
}