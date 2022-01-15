#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int n;
    long x;
    
    cin >>n;
    for (int i = 0; i < n; i++)
    {
        bool v=false;
        cin >> x;
        for (long j = 2; j <= sqrt(x) ; j++)
        {
            if(x%j==0) 
            {                
                v = true;
                
            }
            if(v!=0)
            {
            printf("%d is not prime\n",x);
            break;
            }

        }
               
        if(v==0)
        {
            printf("%d is prime\n",x);
        }

    }
    
    return 0;
}