#include <iostream>
#include <cstdio>
using namespace std;
double add(double x, double y)
{
    return x+y;
}
int main()
{
    double x, y;
    cin >>  x >>y;
    printf("%.2f",add(x,y));
    return 0;
}