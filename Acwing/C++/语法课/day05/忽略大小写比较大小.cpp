#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main ()
{
    string a ,b;
    getline(cin,a);
    getline(cin,b);
    
    for(auto &v : a)
    {
        if (v>='A'&&v<='Z')
        {
            v = v + 32;
        }
        
    }
    
    for(auto &v : b)
    {
        if (v>='A'&&v<='Z')
        {
            v = v + 32;
        }
        
    }
    // cout << a << "\n" <<b;
    if(a>b){
        cout << ">";
    }
    else if (a<b){
        cout << "<";
    }
    else
    {
        cout << "=";
    }
    return 0;
}