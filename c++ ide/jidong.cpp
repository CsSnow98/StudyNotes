#include <bits/stdc++.h>

using namespace std;

vector<string> split(string str, char dec)
{
    int l = 0, r = 0;
    vector<string> res;
    while (r < str.size())
    {
        while (r < str.size() && str[r] != dec) r++;
        res.push_back(str.substr(l, r - l));
        r++;
        l = r;
    }
    return res;
}

int main()
{
    string s = "12,13,14,15,16,";
    vector<string> res;
    res = split(s, ',');
    for (auto v : res) cout << v << " ";
    return 0;
}