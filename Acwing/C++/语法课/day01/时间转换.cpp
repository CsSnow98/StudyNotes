#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    cin >> n;
    printf("%d:%d:%d",n/3600,n%3600/60,n%3600%60);

    return 0;

}