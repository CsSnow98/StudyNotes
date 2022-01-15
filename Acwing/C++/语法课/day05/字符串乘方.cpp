/*给定两个字符串 a 和 b，我们定义 a×b 为他们的连接。

例如，如果 a=abc 而 b=def， 则 a×b=abcdef。

如果我们将连接考虑成乘法，一个非负整数的乘方将用一种通常的方式定义：a0=``(空字符串)，a(n+1)=a×(an)。

输入格式
输入包含多组测试样例，每组测试样例占一行。

每组样例包含一个字符串 s，s 的长度不超过 100。

最后的测试样例后面将是一个点号作为一行。

输出格式
对于每一个 s，你需要输出最大的 n，使得存在一个字符串 a，让 s=an。

输入样例：
abcd
aaaa
ababab
.
输出样例：
1
4
3*/
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main ()
{
    string s;
    while(1)
    {
        getline(cin,s);
        if(s==".") break;
        int len =s.size();
        int n = 0;
        int num = 0;
        string st;
        for(int i = (len - len/2) + 1; i <= len;i++) n+=i;
        // cout << n << "\n";
        string str[n+1] = {};
        // cout << "s是:";
        // for (auto v :s) cout << v;
        // cout << "------\n" ;
        for(int i = 0; i <len/2; i++ )
        {
            for(int j = 0; j < len - i; j++)
            {
                // cout << s[j] << "\n";
                for(int k = 0; k <= i ; k++) {

                    
                    st = st + s[j+k];
                    // cout << "st是:"<< st << "\n";
                    
                  }
                str[num] = st;
                num++;
                // cout << " 次数:" << num <<endl ;
                st = "";
            }
        }
        int t = 0;
        for (int i = 0; i < n; i++)
        {
            int lenstr =  str[i].size();
            // cout << "lenstr为：" << lenstr<<endl ;
            string st2;
        
            for (int j = 1; lenstr * j <= len ; j++)
            {
                st2 = st2 + str[i];
                // cout << "st2为：" << st2 << endl ;
                if(st2 == s) {
                    // cout << "n为：" <<endl ;
                    cout << j <<endl;
                    t = 1;
                    break;
                }                
            }   
            if(t == 1 ) break;         
        }
        if(t==0){cout << "1" <<endl;}
        // cout << "------" ;
        // for(auto v: str) cout << v << "\n";
    }
}
