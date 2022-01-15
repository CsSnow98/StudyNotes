#include <iostream>
#include <cstdio>

using namespace std;

int main()
{   
    int n ;
    cin >> n;
    for (int i = 1; i < 11; i++)
    {
        printf("%d x %d = %d\n",i,n,i*n);
    }
    
    return 0;
}