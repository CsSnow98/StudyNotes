#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    double r,v;
    cin >> r;
    v = (4/3.0)*3.14159*r*r*r;
    printf("VOLUME = %.3lf",v);
    return 0;
}