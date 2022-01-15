#include <cstdio>

int main ()
{
    double n[12][12]={{}};
    int c ;
    char v;
    double num;
    scanf("%d\n",&c);
    scanf("%c\n",&v);
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf ",&n[i][j]);
            // printf("%lf ",n[i][j]);

        }
        scanf("\n");
        // printf("\n");
    }
    if(v == 'S')
    {
    for (int j = 0; j < 12; j++)
        {
            num += n[j][c];
        }
    printf("%.1lf",num);
    }
    else{
        for (int j = 0; j < 12; j++)
        {
            num += n[j][c];
        }
        printf("%.1lf",num/12.0);
    }
    return 0;
}
    
// scanf 读入要过滤空格 和 换行符