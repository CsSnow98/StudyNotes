#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int l=0;
    char a;
    double x =0;
    double m[12][12];
    scanf("%d ",&l);
    scanf("%c",&a);
    for(int i = 0; i<12;i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf",&m[i][j]);
        }
        
    }
    if( a == 'S')
    {
        for (int i = 0; i < 12; i++)
        {
            x += m[l][i];
            
        }
        printf("%.1lf",x);
    }
    else if(a == 'M')
    {
        for (int i = 0; i < 12; i++)
        {
            x += m[l][i];
            
        }
        x = x/12;
        printf("%.1lf",x);
    }

    return 0;
}
    