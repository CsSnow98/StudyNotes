#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a >> b >>c >>d;
    if ((c-a+24)>24)
        if (d >= b) printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",c-a,d-b);
        else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",c-a-1,d-b+60);
    else if((c-a+24)<24)
        if (d >= b) printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",c-a+24,d-b);
        else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",c-a-1+24,d-b+60);
    else 
        if (d > b) printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",c-a,d-b);
        else if (d == b) printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",c-a+24,d-b);
        else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",c-a-1+24,d-b+60);
    return 0;
}