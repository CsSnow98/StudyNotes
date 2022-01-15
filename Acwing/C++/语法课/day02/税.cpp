#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
    double money;
    cin >> money;
    if(money <= 2000)
    {
        printf("Isento");
    }
    else if(money <= 3000)
    {
        printf("R$ %.2lf", (money - 2000) * 0.08);
    }
    else if(money <= 4500)
    {
        printf("R$ %.2lf", (3000 - 2000) * 0.08 + (money - 3000) * 0.18);
    }
    else
    {
        printf("R$ %.2lf", (3000 - 2000) * 0.08 + (4500 - 3000) * 0.18 + (money - 4500) * 0.28);
    }
    return 0;
}