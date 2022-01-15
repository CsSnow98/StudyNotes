#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
    string s;
    getline(cin,s);
    for (auto &v:s)
    {
        if(v>='a'&&v<='z')
        {
            v = (v - 'a' + 27) % 26 + 'a';
        }
        if(v>='A'&&v<='Z')
        {
            v = (v - 'A' + 27) % 26 + 'A';
        }
        cout << v;
    }
    
    
    return 0;
}