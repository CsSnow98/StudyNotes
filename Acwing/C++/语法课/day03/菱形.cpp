#include <iostream>
#include <cstdio>

using namespace std;

int main()
{   
    int n;
    cin >> n;
    int x,y;
    int midx = n /2,midy=n/2;
    for (x = 0; x < n; x++)
    {
        for ( y = 0; y < n; y++)
        {


            if (((abs(x-midx)+abs(y-midy))<=n/2))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
            }
            
        cout << endl;
        }
        
        return 0;
}
    

