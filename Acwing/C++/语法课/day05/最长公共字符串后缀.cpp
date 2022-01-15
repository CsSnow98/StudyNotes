/*
给出若干个字符串，输出这些字符串的最长公共后缀。

输入格式
由若干组输入组成。

每组输入的第一行是一个整数 N。

N 为 0 时表示输入结束，否则后面会继续有 N 行输入，每行是一个字符串（字符串内不含空白符）。

每个字符串的长度不超过 200。

输出格式
共一行，为 N 个字符串的最长公共后缀（可能为空）。

数据范围
1≤N≤200
输入样例：
3
baba
aba
cba
2
aa
cc
2
aa
a
0
输出样例：
ba

a
*/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int main ()
{
    while (1)
    {
        int n;
        cin >> n;
        if(n == 0) break;
        // cout << n << endl;
        string s[n]={};
        string st;
        char a;
        int len[n+1]={0};
        for (int i =0;i<n;i++)
        {
            // cout << n;
            cin >> s[i]; 
            // cout << s[i] <<endl;
            len[i] = s[i].size();   
            // cout <<len[i] <<endl;
        } 
        // cout << "-------";
        // for (int i = 0; i < n; i++)
        // {
        //     cout << s[i] << endl;
        // }  
        
        len[n] = *min_element(len,len+n);
        
        // for (int i = 0; i <n+1; i++)
        // {
        //     cout << len[i] <<endl;
        // }
        int t = 0;
        int num2 =0;
        for (int i = 0; i < len[n] ; i++)
        {
            int num = 0;
            
            a = '\0';
            for (int j = 0; j < n - 1; j++)
            {
                if(s[j][len[j]-1-i] == s[j+1][len[j+1]-1-i]) 
                {
                    a = s[j][len[j]-1-i];
                    num++;
                    // cout << "a:" << a << num <<endl; 
                }

            }
            if(num == n-1 && (t == 0 || t == 1) )
            {
                st = st + a;
                // for(int i = 0; i< st.size();i++) cout << st[st.size()-i-1] ;
                // cout << endl;
                t = 1;
                num2++;
                // cout << "num2:" <<num2 <<endl;
                continue;
            }
            if(num != n-1 && t ==1)
            {
                for(int i = 0; i< st.size();i++) cout <<st[st.size()-i-1] ;
                cout << endl;
                break;
            }
            // cout << num << num2 << t <<endl;
           
            if(num != n-1 && t ==0)
            {
                cout << "" << endl;
                break;
            }
        }
        if(num2 == len[n] && t==1)
        {
            // cout << "----";
            for(int i = 0; i< st.size();i++) cout << st[st.size()-i-1] ; 
            cout << endl;
        }
    }
    
    
    
    return 0;
    
}