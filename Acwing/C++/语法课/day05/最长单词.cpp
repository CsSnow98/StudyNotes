#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main ()
{
    string s,a,b;
    getline(cin ,s);
    int num = 0;
    int n = 0;
    for (auto &v: s)
    {
        if(v == '.' ) v = ' ';
        if (v != ' ')
        {
            a = a + v;
            num++;
        }
        else
        {
            if(n<num)
            {
                n = num;
                b = a;   
            }
            a = "";
            num = 0;
        }
        
    }
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] ;
    }
    
    
    return 0;
}

/*一个以 . 结尾的简单英文句子，单词之间用空格分隔，没有缩写形式和其它特殊形式，求句子中的最长单词。

输入格式
输入这个简单英文句子，长度不超过 500。

输出格式
该句子中最长的单词。如果多于一个，则输出第一个。

输入样例：
I am a student of Peking University.
输出样例：
University*/