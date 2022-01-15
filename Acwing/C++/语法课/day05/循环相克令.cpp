#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std ;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        string sx,sy;
        int x,y;
        cin >> sx >>sy;
        if(sx=="Hunter") x=0;
        else if (sx =="Gun") x=1;
        else x=2;
        if(sy=="Hunter") y=0;
        else if (sy =="Gun") y=1;
        else y=2;
        if((y-x+3)%3==1) cout<<"Player1"<<endl;
        else if(x==y)cout<<"Tie"<<endl;
        else cout<<"Player2"<<endl;
    }
    return 0;
}