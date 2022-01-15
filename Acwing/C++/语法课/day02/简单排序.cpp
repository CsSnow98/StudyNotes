#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >>c;
    if (a<=b&&b<=c) cout<<a<<endl<<b<<endl<<c<<endl<<"\n"<<a<<endl<<b<<endl<<c<<endl;
    if (a>=b&&b>=c) cout<<c<<endl<<b<<endl<<a<<endl<<"\n"<<a<<endl<<b<<endl<<c<<endl;
    else if (a<=b&&b>=c) 
    {
        if(a<=c) cout<<a<<endl<<c<<endl<<b<<endl<<"\n"<<a<<endl<<b<<endl<<c<<endl;
        else cout<<c<<endl<<a<<endl<<b<<endl<<"\n"<<a<<endl<<b<<endl<<c<<endl;
    }
    else if (a>=b&&b<=c) 
    {
        if(a<=c) cout<<b<<endl<<a<<endl<<c<<endl<<"\n"<<a<<endl<<b<<endl<<c<<endl;
        else cout<<b<<endl<<c<<endl<<a<<endl<<"\n"<<a<<endl<<b<<endl<<c<<endl;
    }

    return 0;
}