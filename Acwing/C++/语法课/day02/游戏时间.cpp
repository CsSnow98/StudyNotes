#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    if ((b-a+24)>24)
        printf("O JOGO DUROU %d HORA(S)",b-a);
    else
        printf("O JOGO DUROU %d HORA(S)",b-a+24);
    return 0;
}