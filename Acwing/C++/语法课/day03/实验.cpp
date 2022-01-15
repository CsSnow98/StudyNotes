#include <iostream>
#include <cstdio>

using namespace std;

int main()
{   
    int n,a;
    float cnum,rnum,fnum,num;
    cin >> n;
    string t;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> t;
        num += a;
        if(t == "C")
        {
            cnum  += a;
        }
        else if(t == "R")
        {
            rnum  += a;
        }
        else if(t == "F")
        {
            fnum  += a;
        }
    }
    printf("Total: %.0f animals\n",num);
    printf("Total coneys: %.0f\n",cnum);
    printf("Total rats: %.0f\n",rnum);
    printf("Total frogs: %.0f\n",fnum);
    printf("Percentage of coneys: %.2f %%\n",cnum/num*100);
    printf("Percentage of rats: %.2f %%\n",rnum/num*100);
    printf("Percentage of frogs: %.2f %%\n",fnum/num*100);
    return 0;
}