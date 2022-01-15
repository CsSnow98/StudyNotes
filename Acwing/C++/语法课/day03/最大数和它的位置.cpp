#include <iostream>
#include <cstdio>

using namespace std;

int main()
{   
    int n ,i,maxsize=0;
    int tempi=1;
    cin >> n;
    maxsize = n;
    for(i =2;i<=100;i++)
    {
        cin >> n;
        if (maxsize<n)
        {
            maxsize = n;
            tempi = i;
        }
    }
    printf("%d\n%d",maxsize,tempi);
    return 0;
}