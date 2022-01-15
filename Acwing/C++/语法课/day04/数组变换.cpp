#include <cstdio>

int main ()
{
    int n[20]={0};
    int N[20]={0};

    for (int i = 0; i < 20; i++)
    {
        scanf("%d\n",&n[i]);
        N[19-i]=n[i];

    }
    for (int i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n",i,N[i]);
    }
    return 0;
}