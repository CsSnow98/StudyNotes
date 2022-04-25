#include <bits/stdc++.h>

using namespace std;

vector<string> result;

bool isVaild(const string& s, int st, int en)
{
    if (st > en) return false;
    if (s[st] == '0' && st != en) return false;
    int num = 0;
    for (int i = st; i <= en; i ++)
    {
        if (s[i] > '9' || s[i] < '0') return false;
        num = num * 10 + (s[i] - '0');
        if (num > 255) return false;
    }
    return true;
}

void backtracing(string& s, int si, int pn)
{
    if (pn == 3)
    {
        if (isVaild(s, si, s.size() - 1))
        {
            result.push_back(s);
        }
        return;
    }
    
    for (int i = si; i < s.size(); i++)
    {
        if (isVaild(s, si, i))
        {
            s.insert(s.begin() + i + 1, '.');
            pn++;
            backtracing(s, i + 2, pn);
            pn--;
            s.erase(s.begin() + 1 + i);
        } else break;
    }
}


int main()
{
    string s;
    getline(cin, s);
    if (s.size() <= 12)
    {
        backtracing(s, 0, 0);
        for (const auto & v : result)
        {
            cout << v << endl;
        }
    }
    return 0;
}