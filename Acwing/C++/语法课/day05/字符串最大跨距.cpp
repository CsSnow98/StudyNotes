/*有三个字符串 S,S1,S2，其中，S 长度不超过 300，S1 和 S2 的长度不超过 10。

现在，我们想要检测 S1 和 S2 是否同时在 S 中出现，且 S1 位于 S2 的左边，并在 S 中互不交叉（即，S1 的右边界点在 S2 的左边界点的左侧）。

计算满足上述条件的最大跨距（即，最大间隔距离：最右边的 S2 的起始点与最左边的 S1 的终止点之间的字符数目）。

如果没有满足条件的 S1，S2 存在，则输出 −1。

例如，S= abcd123ab888efghij45ef67kl, S1= ab, S2= ef，其中，S1 在 S 中出现了 2 次，S2 也在 S 中出现了 2 次，最大跨距为：18。

输入格式
输入共一行，包含三个字符串 S,S1,S2，字符串之间用逗号隔开。

数据保证三个字符串中不含空格和逗号。

输出格式
输出一个整数，表示最大跨距。

如果没有满足条件的 S1 和 S2 存在，则输出 −1。

输入样例：
abcd123ab888efghij45ef67kl,ab,ef
输出样例：
18*/
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main ()
{
    string s,s1,s2;
    char c;
    while(cin >> c, c != ',') s += c;
    while(cin >> c, c != ',') s1 += c;
    while(cin >> c) s2 += c;
    int len = s.size();
    int len1 = s1.size();
    int len2 = s2.size();
    cout << "len:" << len <<endl;
    string st1[3000],st2[3000];
    int v1=3000,v2=0;
    int num1 = 0;
    for (int i = 0; i < len-len1+1; i++)
    {
        st1[num1] = "";
        
        for (int j = 0; j < len1; j++)
        {
            st1[num1] = st1[num1] + s[i+j];
            
            // cout << "st1:" << st1 <<endl;
        }
        num1++;
    }
    for (int i = 0; i < 3000; i++)
    {
        if(st1[i] != "" ){
            cout << "i:" <<i <<"st1[i]:"<<st1[i]<<endl;
        }
        if(st1[i]==s1) 
        {
            v1 = i+len1-1;
            cout << "v1:" << v1 <<endl;
            break;

        }
        
    }
    
    int num2 = 0;   
    for (int i = len-len2; i >=0 ; i--)
    {
        st2[num2] = "";
        
        for (int j = 0; j < len2; j++)
        {
            st2[num2] = st2[num2] + s[i+j];
            
            // cout << "st1:" << st1 <<endl;
        }
        num2++;
    }
    for (int i = 0; i < 3000; i++)
    {
        if(st2[i] != "" ){
            cout << "i:" <<i <<"st2[i]:"<<st2[i]<<endl;
        }
        if(st2[i]==s2) 
        {
            v2 = len-i-len2;
            cout << "v2:" <<v2<<endl;
            break;
        }
    }

    if(v1!=3000&&v2!=0)
    {
        if (v1 < v2)
        {
            cout << v2-v1-1 ;
        }
        else
        {
            cout << "-1";
        }
    }
    else
    {
        cout << "-1";
    }
    return 0;
    
}
