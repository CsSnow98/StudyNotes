#include <cstdio>

int main()
{
    double a[100]={0};
    for(int i = 0; i<100;i++)
    {
        scanf("%lf",&a[i]);
        if(a[i]<=10.0)
        {
            printf("A[%d] = %.1lf\n",i,a[i]);
        }
    }
    
}