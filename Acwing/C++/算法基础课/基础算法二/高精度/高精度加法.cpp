#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

vector<int> add(vector<int> &a, vector<int> &b)
{
    int t = 0;
    vector<int> c;
    for (int i = 0; i < a.size() || i < b.size(); i++)
    {
        if (i < a.size())
        {
            t += a[i];
        }
        if (i < b.size())
        {
            t += b[i];
        }
        c.push_back(t % 10);
        t /= 10;
    }
    if (t)
        c.push_back(1);
    return c;
}

int main()
{
    vector<int> a, b;
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
    vector<int> c = add(a, b);
    for (int i = c.size() - 1; i >= 0; i--)
        cout << c[i];
    return 0;
}