#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a,n,sum=0;
    cin>>a;
    while(1)
    {
        cin >>n;
        if (n>0)break;
    }
    for (int i = 0; i < n; i++)
    {
        sum +=a;
        a++;
        /* code */
    }
    cout<<sum;
    return 0;
}