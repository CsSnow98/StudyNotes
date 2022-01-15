#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int m,n,sum;
    while(1)
    {   
        sum = 0;
        cin >> m >>n;
        if (m<=0||n<=0) break;
        if(m>n) swap(m,n);
        for (int i = m; i <= n; i++)
        {
            cout << i <<" ";
            sum += i;
        }
        cout << "Sum=" <<sum<<endl;
    }
    
    return 0;
}