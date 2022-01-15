#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main ()
{
    string s;
    int num = 0;
    getline(cin,s);
    for (auto i : s)
    {
        if (i>='0'&&i<='9')
        {
            num++;
        }
        
    }
    cout << num ;
    return 0;
}
