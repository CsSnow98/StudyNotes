#include <iostream>
#include <cstdio>

using namespace std;

int main()
{   
    int n,x,y;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int sum =0;
        cin >> x >>y;
        if(x>y)
        {
            swap(x,y);
        }
        for (int i = x+1; i < y; i++)
        {
            if(i%2!=0)
            {
            sum += i;
            }
        }
        printf("%d\n",sum);
    }
    
    
    
    
    return 0;
}