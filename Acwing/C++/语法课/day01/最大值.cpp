#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin >>a>>b>>c;
    if (a>b)
    {
        if (a>c)
        {
            printf("%d eh o maior",a);/* code */
        }
        else
        {
            printf("%d eh o maior",c);
        }
        
    }
    else
        if (b>c)
        {
            printf("%d eh o maior",b);/* code */
        }
        else
        {
            printf("%d eh o maior",c);
        }
        
    return 0;
}