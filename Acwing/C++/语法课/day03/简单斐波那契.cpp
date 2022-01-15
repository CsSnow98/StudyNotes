#include <iostream>
#include <cstdio>

using namespace std;

int main()
{   
    int n;
    int a = 0;
    int b = 1;
    int c = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << a << " ";
        c = a+b;
        a = b;
        b = c;
 
    }
    
    return 0;
}