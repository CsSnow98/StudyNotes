#include <bits/stdc++.h>

using namespace std;

void test(int *p, int &b)
{
    *p = 1;
    // b = 2;
}

int main()
{
    int a = 0;
    int *p = &a;
    int &b = a;
    cout << a << " " << b << endl;
    test(p, b);
    cout << a << " " << b << endl;
    return 0;
}