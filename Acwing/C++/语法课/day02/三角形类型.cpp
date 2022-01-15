#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    float a,b,c,temp;
    cin >> a >>b >>c;
    if (a>=b&&a<=c)
    {
        temp = a;
        a = c;
        c = temp;    
    }
    else if(a <= b&&a<=c)
    {
        if (b <= c)
        {
            temp = a;
            a = c;
            c = temp;  
        }
        else
        {
            temp = a;
            a = b;
            b = temp;  
        }
    }
    else if(a <= b&&a>=c)
    {
        temp = a;
        a = b;
        b = temp; 
    }

    if(a>= (b+c))
    {
        cout <<"NAO FORMA TRIANGULO"<<endl;
    }
    else
    {
        if (a*a == (b*b +c*c)) cout <<"TRIANGULO RETANGULO"<<endl;
        else if (a*a > (b*b +c*c)) cout <<"TRIANGULO OBTUSANGULO"<<endl;
        else if (a*a < (b*b +c*c)) cout <<"TRIANGULO ACUTANGULO"<<endl;
        
        if (a==b&&b==c) cout <<"TRIANGULO EQUILATERO"<<endl;
        else 
        {
            if (a==c||a==b||b==c)
                cout <<"TRIANGULO ISOSCELES"<<endl;
        }
    
    }
    return 0;
}