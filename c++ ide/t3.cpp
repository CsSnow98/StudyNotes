#include <bits/stdc++.h>


using namespace std;

vector<int> a = {1, 2, 3, 4};

bool is(int x)
{
    
    if (x == 0 || x == 1) return false;
    for (int i = 2; i * i <= x; ++i)
    {
        if (x % i == 0) return false;
    }
    return true;
}

int main()
{
   
    while (a.size() != 1)
    {
        int i = 1;
        for (auto it = a.begin(); it != a.end(); i++)
        {
            if (is(i) == false) it = a.erase(it);
            else it++;
        } 
    }
    cout << a[0];
    return 0;
}