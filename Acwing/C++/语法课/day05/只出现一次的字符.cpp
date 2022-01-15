#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main ()
{
    string s;
    bool t= true;
    cin >> s;
    int a[26] = {0};
    for (auto v: s)
    {
        if(v>='a'&&v<='z')
        {
            // printf("%d ",v);
            a[v-'a']++;
            // cout << a[v-'a'] << " ";
        }
    }
    for (auto v:s)
    {
        if(a[v-'a']==1)
        {
            cout << v;
            t = false;
            break;
        }
    }
    if (t)
    {
        cout << "no";
    }
    return 0;
}