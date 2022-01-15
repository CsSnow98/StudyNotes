#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a,b,c,d;
    double e,f;
    double VALOR;
    scanf("%d %d %lf%d %d %lf",&a,&c,&e,&b,&d,&f);
    VALOR = c*e+d*f;
    printf("VALOR A PAGAR: R$ %.2lf",VALOR);
    return 0;
}