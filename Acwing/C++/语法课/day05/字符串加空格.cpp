#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main ()
{
    int t =0;
    int num = 0;
    string s;
    getline(cin,s);
    for(int i =0;i<s.size();i++)
    {
        if(s[i] == ' ')
        {
            t = i;
            num++;
            if(num == 1)
            {
                cout << s[i];
            }
        }
        else
        {
            num = 0;
            cout << s[i];
        }
    }
    return 0;
}