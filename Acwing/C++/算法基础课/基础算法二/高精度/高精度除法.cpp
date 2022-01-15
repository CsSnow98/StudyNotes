#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> div(vector<int> &a, int b, int &d)
{
    vector<int> c;
    for (int i = 0; i < a.size(); i++)
    {
        if (i < a.size())
            d = a[i] + d * 10;
        c.push_back(d / b);
        d %= b;
    }
    reverse(c.begin(), c.end());
    while (c.size() > 1 && c.back() == 0)
        c.pop_back();
    return c;
}

int main()
{
    vector<int> a, c;
    int b;
    int d = 0;
    string n1;
    cin >> n1;
    cin >> b;
    for (int i = 0; i < n1.size(); i++)//从高位存储，除法从高位开始操作
    {
        a.push_back(n1[i] - '0');
    }
    c = div(a, b, d);
    for (int i = c.size() - 1; i >= 0; i--)
        cout << c[i];
    cout << endl
         << d;
    return 0;
}