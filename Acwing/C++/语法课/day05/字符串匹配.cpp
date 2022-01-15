#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
    string a,b;
    float k;
    int num = 0;
    cin >> k;
    cin >> a >>b;
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i]==b[i])
        {
            num++;
        }
        
    }
    if (num / a.size() >= k)
        {
            cout << "yes";
        }
        else
        {
            cout <<"no";
        }
    return 0;
}