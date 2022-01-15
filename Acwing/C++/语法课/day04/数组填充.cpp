#include <cstdio>

int main()
{
    int a[10]={0};
    int n;
    scanf("%d",&n);
    a[0] = n;
    printf("N[0] = %d\n" , n);
    for(int i =1 ; i<10 ;i++)
    {
        a[i] = 2* a[i-1];
        printf("N[%d] = %d\n",i,a[i]);
    }
    
}