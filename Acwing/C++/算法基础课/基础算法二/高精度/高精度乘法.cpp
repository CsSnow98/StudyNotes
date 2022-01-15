#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;


vector<int> mul(vector<int> &a, int b)
{
    int t = 0;
    vector<int> c;
    for (int i = 0; i < a.size() || t; i++)
    {
        if (i < a.size())
            t = t + a[i] * b;
        c.push_back(t % 10);
        t /= 10;
    }
    while (c.size() > 1 && c.back() == 0)
        c.pop_back();
    return c;
}

int main()
{
    vector<int> a, c;
    int b;
    string n1;
    cin >> n1;
    cin >> b;
    for (int i = n1.size() - 1; i >= 0; i--)
    {
        a.push_back(n1[i] - '0');
    }
    c = mul(a, b);
    for (int i = c.size() - 1; i >= 0; i--)
        cout << c[i];
    return 0;
}