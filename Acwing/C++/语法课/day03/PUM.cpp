#include <iostream>
#include <cstdio>

using namespace std;

int main()
{   
    int n,m;
    cin >> n >> m;
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(k%m==0)cout << "PUM";
            else
            {
            cout << k <<" ";
            }
            k++;
        }
  
        cout << endl;
    }
    
    return 0;
}