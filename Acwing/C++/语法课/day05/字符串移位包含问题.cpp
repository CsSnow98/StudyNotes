/*对于一个字符串来说，定义一次循环移位操作为：将字符串的第一个字符移动到末尾形成新的字符串。

给定两个字符串 s1 和 s2，要求判定其中一个字符串是否是另一字符串通过若干次循环移位后的新字符串的子串。

例如 CDAA 是由 AABCD 两次移位后产生的新串 BCDAA 的子串，而 ABCD 与 ACBD 则不能通过多次移位来得到其中一个字符串是新串的子串。

输入格式
共一行，包含两个字符串，中间由单个空格隔开。

字符串只包含字母和数字，长度不超过 30。

输出格式
如果一个字符串是另一字符串通过若干次循环移位产生的新串的子串，则输出 true，否则输出 false。

输入样例：
AABCD CDAA
输出样例：
true*/
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    string s1,s2;
    int num = 0;
    cin >> s1 >> s2;
    int len1 = s1.size();
    int len2 = s2.size();
    if (len1 >= len2)
    {
        bool b = true;
        for (auto &v : s1)
        {
            
            b = true;
            s1 = s1 + v;
            num++;
            // cout << "---";
            // for (int i = 0; i < len2 ; i++)
            // {
            //     cout << s1[i+num] ;
            // }
            // cout << "---";
            for (int i = 0; i < len2; i++)
            {
                if(s1[i+num]!=s2[i]) {
                    
                    b = false; 
                    // cout << s1[i+num] <<"123" <<s2[i] << "456"<< b<< endl;
                    break;
                }

                // cout << b;
            }
            if (b == true) break; 
        }
        if (b)
            {
                cout << "true" ;
            }
            else
            {
                cout << "false";
            }
    }
    else
    {
        bool b = true;
        for (auto &v : s2)
            {
                b = true;
                s2 = s2 + v;
                num++;
                
                for (int i = num; i < len1 ; i++)
                {
                    if(s1[i]!=s2[i+num]) 
                    {
                        
                        b = false; 
                        // cout << s1[i+num] <<"123" <<s2[i] << "456"<< b<< endl;
                        break;
                    }
                }
                if (b == true) break;   
            }
        if (b)
        {
            cout << "true" ;
        }
        else
        {
            cout << "false";
        }
    }
    return 0;
}
