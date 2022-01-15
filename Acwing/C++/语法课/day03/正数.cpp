#include <iostream>
#include <cstdio>

using namespace std;

int main()
{   
    double n;
    int pos_num=0;
    for (int i = 0; i < 6; i++)
    {
        cin >>n;
        if(n>0)
        {
            ++pos_num;
        }
    }
    printf("%d positive numbers",pos_num);
    return 0;
}