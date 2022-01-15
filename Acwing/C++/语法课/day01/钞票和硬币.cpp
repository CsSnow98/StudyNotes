#include <iostream>
#include <cstdio>

using namespace std;

int main ()
{
    double n;
    int d ,n_sub;
    cin >> n ;
    n_sub = n * 100 ;
    n_sub = n_sub % 100;
    printf("NOTAS:\n");
    d = n /100;
    printf("%d nota(s) de R$ 100.00\n", d);
    n -= d * 100;
    d = n /50;
    printf("%d nota(s) de R$ 50.00\n", d);
    n -= d * 50;
    d = n /20;
    printf("%d nota(s) de R$ 20.00\n", d);
    n -= d * 20;
    d = n /10;
    printf("%d nota(s) de R$ 10.00\n", d);
    n -= d * 10;
    d = n /5;
    printf("%d nota(s) de R$ 5.00\n", d);
    n -= d * 5;
    d = n /2;
    printf("%d nota(s) de R$ 2.00\n", d);
    n -= d * 2;
    printf("MOEDAS:\n");
    d = n /1;
    printf("%d moeda(s) de R$ 1.00\n", d);
    n -= d * 1;
    n = n_sub;
    d = n /50;
    printf("%d moeda(s) de R$ 0.50\n", d);
    n -= d * 50;
    d = n /25;
    printf("%d moeda(s) de R$ 0.25\n", d);
    n -= d * 25;
    d = n /10;
    printf("%d moeda(s) de R$ 0.10\n", d);
    n -= d * 10;
    d = n /5;
    printf("%d moeda(s) de R$ 0.05\n", d);
    n -= d * 5;
    d = n /1;
    printf("%d moeda(s) de R$ 0.01\n", d);
    n -= d * 1;
    return 0;
}