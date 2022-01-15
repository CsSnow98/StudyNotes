#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() 
{
    int n;
    string s;
    cin >> n;
    while (n--)
    {
        cin >> s;/* code */
        int c[128] = {0};
        for (int i = 1; i < s.size(); i++)
        {
            if(s[i] == s[i-1]) 
            {
                if(c[s[i-1]]==0) c[s[i-1]] = 1;
                c[s[i-1]]++;
            }  
            if(c[s[i-1]]==0) c[s[i-1]]++ ;
        }
        int v = 0;
        for (int i = 0; i < 128; i++)
        {
            if(c[i]!=0) v = i;
        }
        cout << v <<<endl;
        for (int i = 0; i < s.size(); i++)
        {
            if(c[s[i]]>c[v]) v = s[i];           
        }
        cout << char(v) << " " <<c[v]<<"\n";
        // for (int i = 0; i < 128; i++)
        // {
        //     if(c[i]!=0) cout<<i<<" "<<c[i];/* code */
        // }
        
        
    }
    
    

    return 0;
}
/*求一个字符串中最长的连续出现的字符，输出该字符及其出现次数，字符串中无空白字符（空格、回车和 tab），如果这样的字符不止一个，则输出第一个。

输入格式
第一行输入整数 N，表示测试数据的组数。

每组数据占一行，包含一个不含空白字符的字符串，字符串长度不超过 200。

输出格式
共一行，输出最长的连续出现的字符及其出现次数，中间用空格隔开。

输入样例：
2
aaaaabbbbbcccccccdddddddddd
abcdefghigk
输出样例：
d 10
a 1*/