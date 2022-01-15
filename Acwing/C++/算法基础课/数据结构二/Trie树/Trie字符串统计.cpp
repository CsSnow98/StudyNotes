#include <iostream>
#include <cstdio>

using namespace std;

const int N = 100010;

int son[N][26], cnt[N], idx;

void insert(string s)
{
    int q = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int p = s[i] - 'a';
        if (!son[q][p])
            son[q][p] = ++idx;
        q = son[q][p];
    }
    cnt[q]++;
}

int query(string s)
{
    int q = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int p = s[i] - 'a';
        if (!son[q][p])
            return 0;
        q = son[q][p];
    }
    return cnt[q];
}

int main()
{
    int n;
    char op[2];
    string s;
    cin >> n;
    while (n--)
    {
        cin >> op >> s;
        if (op[0] == 'I')
        {
            insert(s);
        }
        else
        {
            cout << query(s) << endl;
        }
    }
    return 0;
}