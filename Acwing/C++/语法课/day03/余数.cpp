#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    long n;
    cin >>n;
    for (int i = 1; i < 10000; i++)
    {
        if (i % n == 2) cout << i <<endl;
        /* code */
    }
    
    return 0;
}