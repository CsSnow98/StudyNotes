#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a ==61 ) printf("Brasilia");
    else if(a ==71) printf("Salvador");
    else if(a ==11) printf("Sao Paulo");
    else if(a ==21) printf("Rio de Janeiro");
    else if(a ==32) printf("Juiz de Fora");
    else if(a ==19) printf("Campinas");
    else if(a ==27) printf("Vitoria");
    else if(a ==31) printf("Belo Horizonte");
    else  printf("DDD nao cadastrado");

    return 0;
}