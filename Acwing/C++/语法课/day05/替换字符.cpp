#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() 
{
    string s;
    char a ;
    getline(cin,s);
    cin >> a ;
    for (auto &v :s)
    {
        if(v == a ) v = '#'; 
        cout << v;
    }
    return 0;
}
