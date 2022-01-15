#include <cstdio>

int main()
{
    double M[12][12];
    char a ;
    double x = 0.0;
    scanf("%c",&a);
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf",&M[i][j]);
        }
        
    }
    if(a == 'S')
    {
        for (int i = 0; i < 12; i++)
        {
            for (int j = 0; j < 11-i; j++)
            {
                x += M[i][j];
            }
        
    } 
    printf("%.1lf",x);
    }
    else
    {
        int num = 0;
        for (int i = 0; i < 12; i++)
        {
            for (int j = 0; j < 11-i; j++)
            {
                x += M[i][j];
                num++;
            }
        }
    printf("%.1lf",x/num);
}
}