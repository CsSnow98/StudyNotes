#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    cin >> n;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",n/365,n%365/30,n%365%30);

    return 0;

}