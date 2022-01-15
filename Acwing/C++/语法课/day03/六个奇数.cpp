#include <iostream>
#include <cstdio>

using namespace std;

int main()
{   
    int n;
    cin >> n;
    if (n%2==0)
    {
        for (int i = 1; i < 7; i++)
        {
            cout << n + 2*i-1 <<endl;
        }
        
    }
    else
    {
        for (int i = 0; i < 6; i++)
        {
            cout << n + 2*i<<endl;
     
}
    }