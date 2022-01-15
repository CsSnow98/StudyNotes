#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;
//判断a >= b
bool cmp(vector<int> &a, vector<int> &b)
{
    if (a.size() > b.size())
        return true;
    else if(a.size() < b.size()) return false;
    else
    {
        for (int i = a.size(); i >= 0  ; i--)
        {
            if (a[i] != b[i])
                return a[i] > b[i];
        }
        return true;
    }
}

vector<int> sub(vector<int> &a, vector<int> &b)
{
    int t = 0;
    vector<int> c;
    for (int i = 0; i < a.size(); i++)
    {
        if (i < a.size())
            t = a[i] - t;
        if (i < b.size())
            t = t - b[i];
        c.push_back((t + 10) % 10);
        if (t < 0)
            t = 1;
        else
            t = 0;
    }
    while(c.size()>1&&c.back()==0) c.pop_back();
    return c;
}

int main()
{
    vector<int> a, b, c;
    string n1, n2;
    cin >> n1 >> n2;
    for (int i = n1.size() - 1; i >= 0; i--)
    {
        a.push_back(n1[i] - '0');
    }
    for (int i = n2.size() - 1; i >= 0; i--)
    {
        b.push_back(n2[i] - '0');
    }
    if (cmp(a, b))
    {
        c = sub(a, b);
    }
    else
    {
        c = sub(b, a);
        cout << "-";
    }
    for (int i = c.size() - 1; i >= 0; i--)
        cout << c[i];
    return 0;
}