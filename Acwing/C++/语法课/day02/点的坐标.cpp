#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    double a,b;
    cin >> a >> b;
    if (a > 0.0 )
    {
        if (b>0.0)
        cout <<"Q1"<<endl;
        else if (b<0.0)
        cout <<"Q4"<<endl;
        else
        cout << "Eixo X"<<endl;
    }
    else if (a < 0.0)
    {
        if (b>0.0)
        cout <<"Q2"<<endl;
        else if (b<0.0)
        cout <<"Q3"<<endl;
        else
        cout << "Eixo X"<<endl;
    }
    else
    {
        if (b == 0.0)
        cout << "Origem" <<endl;
        else
        cout << "Eixo Y" <<endl;
    }
    return 0;
}