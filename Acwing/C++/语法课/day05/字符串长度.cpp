#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
    char s[101];
    int n =0;
    cin.getline(s,101);
    printf("%d",int(strlen(s)));
    return 0;
}

/*给定一行长度不超过 100 的非空字符串，请你求出它的具体长度。

输入格式
输入一行，表示一个字符串。注意字符串中可能包含空格。

输出格式
输出一个整数，表示它的长度。

输入样例：
I love Beijing.
输出样例：
15