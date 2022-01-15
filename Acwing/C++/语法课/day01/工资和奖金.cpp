#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    string name;
    float a,b;
    cin >> name >> a >>b;
    printf("TOTAL = R$ %.2f",a + 0.15* b);
    return 0;

}