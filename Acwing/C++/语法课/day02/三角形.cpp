#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    float a,b,c;
    cin >> a >>b >>c;

    if (a+b >c && a+c>b && b+c>a)
    {
        printf("Perimetro = %.1f", a+b+c);
    }
    else
    {
        printf("Area = %.1f", (a+b)*c*0.5);
    }
    return 0;
}