#include <iostream>
#include <cstdio>

using namespace std;

int main()
{   
    long n,x;
    int in =0;
    int out=0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x>=10 && x<=20)
        {
            in++;
        }
        else
        {
            out++;
        }
    }

    printf("%d in\n%d out",in,out);
    
    return 0;
}