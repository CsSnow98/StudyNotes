#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main () 
{
    string str;
    string substr;
    int v=0;
    while(cin >> str >> substr)
    {
    cout << str << "\n" << substr <<endl;
    for (int i = 1; i < str.size(); i++)
    {
        if(str[i]>str[v]) v = i;
        
    }
    cout << v <<endl;
    for (int i = 0; i <= v; i++)
    {
        cout << str[i];
    }
    for (int i = 0; i < substr.size(); i++)
    {
        cout << substr[i];
    }
    for (int i = v+1; i < str.size(); i++)
    {
        cout << str[i];
    } 
    }

    return 0;
}