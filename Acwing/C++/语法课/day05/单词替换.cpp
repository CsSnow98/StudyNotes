#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    string s,a,b;
    string st;
    getline(cin,s);
    getline(cin,a);
    getline(cin,b);
    for(int i = 0 ;i<s.size();i++)
    {
        if(s[i]!=' ')
        {
            st = st + s[i];
            cout << "--" << st << "--" <<"\n";
            if (st == a)
            {
                
                cout << b ;
            }
        }
        else
        {
            cout << st << " ";
            if (i==s.size()-1) break;
            st = "";
        }
    }
    cout << st;
    return 0;
}
/*输入一个字符串，以回车结束（字符串长度不超过 100）。

该字符串由若干个单词组成，单词之间用一个空格隔开，所有单词区分大小写。

现需要将其中的某个单词替换成另一个单词，并输出替换之后的字符串。

输入格式
输入共 3 行。

第 1 行是包含多个单词的字符串 s;

第 2 行是待替换的单词 a(长度不超过 100);

第 3 行是 a 将被替换的单词 b(长度不超过 100)。

输出格式
共一行，输出将 s 中所有单词 a 替换成 b 之后的字符串。*/

