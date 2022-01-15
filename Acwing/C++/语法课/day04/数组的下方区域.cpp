#include <cstdio>

int main ()
{
    double n[12][12]={{}};
    int nn = 0;
    char v;
    double num = 0;
    scanf("%c\n",&v);

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf ",&n[i][j]);

        }
        scanf("\n");

    }
    if(v == 'S')
    {
        for (int i = 11; i > 0; i--)
        {
            for (int j = 12-i; j < i; j++)
        {
            num += n[i][j];
        }/* code */
        }
        printf("%.1lf",num);
    }
    else
    {
        for (int i = 11; i > 0; i--)
        {
            for (int j = 12-i; j < i; j++)
        {
            num += n[i][j];
            nn++;
        }/* code */
        }
        printf("%.1lf",num/nn);
    }
    return 0;
}
    
    